const { createServer } = require('node:http');
const express = require('express');
const { join } = require('node:path');
const app = express();


const server = createServer(app);
const PORT = 3000;

app.use('/public', express.static(join(__dirname, 'public')));

app.set('view engine', 'hbs');



app.get('/', (req, res) => {

    res.render('home', {
        title: 'Home',
        message: 'Welcome to my website',
    });
    
});









server.listen(PORT, (err) => {
    if (err) console.log('Server error: ', err);
    else console.log(`Server is listening on port ${PORT}`);
})