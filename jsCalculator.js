const { add, division, multiply, sub, options, } = require('./utils');
while (true) {
    let option = parseInt(options());

    switch (option) {
        case 1: console.log(add());
            break;

        case 2: console.log(sub());
            break;
        
        case 3: console.log(multiply());
            break;
        
        case 4: console.log(division());
            break;
        
        default: process.exit(0);

    }
}



