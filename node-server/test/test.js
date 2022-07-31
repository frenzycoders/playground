const mongoose = require('mongoose');
const PASSWORD = '6avO8YCrYLN1y0Ft'
const DATABASE_URL = 'mongodb://frenzycoder:6avO8YCrYLN1y0Ft@cluster0-shard-00-00.vcwpx.mongodb.net:27017,cluster0-shard-00-01.vcwpx.mongodb.net:27017,cluster0-shard-00-02.vcwpx.mongodb.net:27017/?ssl=true&replicaSet=atlas-qjg3d4-shard-0&authSource=admin&retryWrites=true&w=majority'
//mongodb://frenzycoder:6avO8YCrYLN1y0Ft@cluster0-shard-00-00.vcwpx.mongodb.net:27017,cluster0-shard-00-01.vcwpx.mongodb.net:27017,cluster0-shard-00-02.vcwpx.mongodb.net:27017/test?authSource=admin&replicaSet=atlas-qjg3d4-shard-0&readPreference=primary&appname=MongoDB%20Compass&ssl=true
const connectToDatabase = () => {
    mongoose.connect(DATABASE_URL).then(() => {
        console.log('DATABASE CONNECTIO STATUS: true');
    }).catch((err) => {
        console.log('DATABASE CONNECTION ERROR: ', err);
    })
}

connectToDatabase()