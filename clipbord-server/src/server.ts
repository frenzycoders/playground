import { Server, Socket } from 'socket.io'
import { createServer } from 'http'
import cors from 'cors'
import express from 'express'
import { config } from 'dotenv'
import mongoose from 'mongoose'

config();
const app = express();
app.use(cors());
app.use(express.json());
app.use(express.urlencoded({ extended: true }));

const PORT = process.env.PORT || 4040;
const DB = process.env.DB || 'mongodb://localhost/clipbord'

const server = createServer(app);

const io = new Server(server);

const main = async () => {
    try {
        await mongoose.connect(DB);
        console.log('DATABSE CONNECTION :TRUE');
        server.listen(PORT)
        console.log('server started on : ', PORT);
    } catch (error) {
        console.log('DATABSE CONNECTION ERROR', error);
    }
}

main();




