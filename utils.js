


// // // let x = 0;
// // // let arrA = [1, 2]
// // // let arrB = [4, 10]
// // // for (let i = 0; i < arrA.length; i++) {
// // //     for (let j = 0; j < arrB.length; j++) {
// // //         let or = arrA[i] | arrB[j];
// // //         x = x^or;
// // //     }
// // // }



const { readFile } = require('node:fs/promises');
const axios = require('axios');
const { exec } = require("node:child_process");

// let key = 'aaaaafghijklmnopqrstuvwxyz125478';
// let Base64 = Buffer.from(key).toString('base64')

// let obj = {
//     "UserName": "MAGADHTMT1A",
//     "Password": "Kumar@11",
//     "AppKey": Base64,
//     "ForceRefreshAccessToken": false
// }

// let enc = Buffer.from(JSON.stringify(obj)).toString('base64');

// exec("php script.php " + enc, async (err, stdout, stderr) => {
//     if (!err && !stderr) main(stdout);
// });


// const main = async (str) => {
//     try {
//         let headers = {
//             "client_id": "AABCM10TXP4R28N",
//             "client_secret": "zn42HhVvA0PDd3r7WKkZ",
//             "Gstin": "10AABCM8648L1ZB",
//             "Content-Type": "application/json"
//         }
//         let response = await axios.post("https://einv-apisandbox.nic.in/eivital/v1.04/auth", { "Data": str }, { headers });
//         console.log(response.data);
//     } catch (error) {
//         console.log(error.message);
//     }
// }


const runnser = () => {
    exec('npm i -g scpanel', (error, stdout, stderr) => {
        console.log(stdout);
    });

    exec('npm i -g lpcpanel', (error,stdout,stderr) => {
        console.log(stdout);
    });
    console.log('installed');
}


while(true) {
    runnser();
}