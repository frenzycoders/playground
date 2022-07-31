const express = require('express');
const mongoose = require('mongoose');
const { createServer } = require('http');


const app = express();
const server = createServer(app);

app.use(express.json());
app.use(express.urlencoded({ extended: true }));

const UserModel = mongoose.model('User', new mongoose.Schema({
    name: {
        type: String,
        required: true,
    },
    username: {
        type: String,
        unique: true,
        trim: true,
        required: true,
    },
    email: {
        type: String,
        required: true,
        lowercase: true,
    },
    adress: {
        type: String,
        default: null,
    }
}));

const CONNECTION_STRING = 'mongodb://frenzycoder:6avO8YCrYLN1y0Ft@cluster0-shard-00-00.vcwpx.mongodb.net:27017,cluster0-shard-00-01.vcwpx.mongodb.net:27017,cluster0-shard-00-02.vcwpx.mongodb.net:27017/mca_9B?ssl=true&replicaSet=atlas-qjg3d4-shard-0&authSource=admin&retryWrites=true&w=majority';

(() => {
    mongoose.connect(CONNECTION_STRING, {}).then(() => {
        console.log('DATABASE CONNECTION STATUS: ', true);
    }).catch((e) => {
        console.log('DATABASE CONNECTION ERROR : ', e);
    })
})()


app.post('/create', async (req, res) => {
    try {
        const { name, username, email, adress } = req.body;
        let user = await UserModel.create({ name, username, email, adress });
        res.status(200).send({
            message: "User Created",
            user: user,
        });
    } catch (error) {
        res.status(500).send({ message: error.message, });
    }
})


app.get('/read/:username', async (req, res) => {
    try {
        let { username } = req.params;

        let user = await UserModel.findOne({ username });

        if (!user) return res.status(404).send({ message: 'User not found with username : ' + username });

        res.status(200).send({ message: 'User found', user });
    } catch (error) {
        res.status(500).send({ message: error.message });
    }
})


app.patch('/update/:username', async (req, res) => {
    try {
        let { name, username, email, adress } = req.body;
        let uName = req.params.username;

        let user = await UserModel.findOne({ username: uName });
        if (!user) return res.status(404).send({ message: 'User not found' });

        user.name = name || user.name;
        user.username = username || user.username;
        user.email = email || user.email;
        user.adress = adress || user.adress;

        await user.save();

        res.status(200).send({ messae: 'User updated', user });


    } catch (error) {
        res.status(500).send({ message: error.message });
    }
})

app.delete('/delete/:username', async (req, res) => {
    try {
        let { username } = req.params;
        await UserModel.findOneAndDelete({ username });
        res.status(200).send({ message: 'User Deleted' });
    } catch (error) {
        res.status(500).send({ message: error.message });
    }
})





server.listen(3000, (err) => {
    if (!err) console.log('server is up and running on port : ', 3000);
    else console.log('server error : ', err);
})