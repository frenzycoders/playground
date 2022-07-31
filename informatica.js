
let small = [];
let tmp = { "data": null, "index": null };
function writeOutput(inputData) {
    // Start writing code here to consume input, and return result.
    let l = Object.values(inputData.split('\n'));
    findSmall(l, 0);

    return small;
}

const findSmall = (l, index) => {

    if (l.length > 0) {
        let s = [l[index].split(',')[0], l[index].split(',')[1]];
        for (let i = 0; i < l.length; i++) {
            for (let j = i + 1; j < l.length; j++) {
                let q = l[j];
                let m = [parseInt(q.split(',')[0]), parseInt(q.split(',')[1])];

                if (s[0] > m[0] && s[1] > m[1]) {
                    s = [m[0], m[1]]
                }
            }
        }

        if (tmp.data != null && tmp.index != null) {
            if (parseInt(tmp.data.split(',')[1]) > s[1]) {
                small[tmp.index] = s.join(',');
                tmp.data = s.join(',');
            } else {
                small.push(s.join(','));
                tmp.data = s.join(',');
                tmp.index = small.length - 1
            }
        } else {
            small.push(s.join(','));
            tmp.data = s.join(',');
            tmp.index = small.length - 1
        }



        l = l.filter((value, i) => {
            if (value != s.join(',')) return value;
        })
        findSmall(l, index++);
    }
}
console.log(writeOutput(`64,120
65,100
70,150
56,90
75,190
60,95
68,110`))