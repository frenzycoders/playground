const { createServer } = require('http2');
let express = require('express');

const app = express();
let server = createServer(app);

server.listen(5050, (err) => {
    if (err) console.log(err);
    else console.log(server);
})