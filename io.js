// const io = require('socket.io');
const express = require('express');
const clarifai = require('clarifai');
const app = express();
const http = require('http').createServer(app)

app.use(express.json());
app.use(express.urlencoded({ extended: true }));


app.get('/',async (req,res) => {
    res.download('/home/jack/Desktop/imp.zip');
});


http.listen(3000, () => {
    console.log('Server started at 3000');
})