/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[][]}
 */

class CPJS {
    // LeetCode 2210 Count Hills and Valleys in an array
    countHillValley(nums) {
        let count = 0;
        for (let i = 0; i < nums.length; i++) {

            if (nums[i] == nums[i + 1]) {
                nums.splice(i, 1);
                i = 0;
            }

        }

        for (let i = 1; i < nums.length; i++) {
            if ((nums[i] > nums[i + 1] && nums[i] > nums[i - 1]) || (nums[i] < nums[i + 1] && nums[i] < nums[i - 1])) {
                count++;
            }
        }
        console.log(count);
    }

    // LeetCode 2215 Find Difference of two arrays
    findDifference(nums1, nums2) {
        let arrayA = []
        let arrayB = []

        nums1.forEach((e) => {
            if (!nums2.includes(e) && !arrayA.includes(e)) {
                arrayA.push(e);
            }
        })

        nums2.forEach((e) => {
            if (!nums1.includes(e) && arrayB.includes(e)) {
                arrayB.push(e);
            }
        })

        console.log([arrayA, arrayB])
    }

    divideArray(nums) {
        let filtred = [];
        let count = 0;
        for (let i = 0; i < nums.length; i++) {
            if (!filtred.includes(nums[i])) {
                for (let j = 0; j < nums.length; j++) {
                    if (nums[i] === nums[j]) {
                        count += 1;
                    }
                }
                filtred.push(nums[i]);
                if (count % 2 == 0) {
                    continue;
                } else {
                    return false;
                }
            }
        }

        return true;
    }

    //Leetcode 48 Rotate matrix 90 degree
    rotate(matrix) {
        for (let i = 0; i < matrix.length; i++) {
            this.swapPossibleDigs(i, matrix)
        }
        return matrix;
    };

    swapPossibleDigs(i, matrix) {

        let x = i + 1;
        while (x <= (matrix.length - 1)) {
            [matrix[x][i], matrix[i][x]] = [matrix[i][x], matrix[x][i]]
            x++;
        }
        matrix[i].reverse()
    }

    //LeetCode 33 Search in rotated sorted array with distinct elements
    searchInRotatedAndSortedArray(arr, target) {
        let left = 0;
        let right = arr.length - 1;
        let mid = parseInt((left + right) / 2);
        while (left <= right) {
            if (arr[mid] == target) {
                return mid;
            } else if (arr[left] < arr[mid] && (arr[left] <= target && target <= arr[mid]) || arr[left] > arr[mid] && (arr[left] <= target || target <= arr[mid])) {
                right = mid - 1;
                mid = parseInt((left + right) / 2);
            } else {
                left = mid + 1;
                mid = parseInt((left + right) / 2)
            }
        }

        return -1;
    }

    //Leetcode 81 search in rotated storted array 
    searchInRotatedAndSortedArraySameElements(arr, target) {
        let left = 0;
        let right = arr.length - 1;
        let mid = parseInt((left + right) / 2);
        while (left <= right) {
            console.log('data', arr[mid]);
            console.log('mid index', mid);
            if (arr[mid] == target) {
                return mid;
            } else if (arr[left] <= arr[mid] && (arr[left] <= target && target <= arr[mid]) || arr[left] >= arr[mid] && (arr[left] <= target && target <= arr[mid])) {
                right = mid - 1;
                mid = parseInt((left + right) / 2);
                console.log('first', mid);
            } else {
                left = mid + 1;
                mid = parseInt((left + right) / 2)
                console.log('second', mid);
            }
        }

        return -1;
    }

    //Leetcode 69 sqrtx;
    sqrt(num) {
        let left = 0;
        let right = num - 1;
        let mid = parseInt((left + right) / 2);
        let ans = 1;
        while (left <= right) {
            if ((mid * mid) <= num) {
                ans = mid;
                left = mid + 1;
                mid = parseInt((left + right) / 2);
            } else {
                right = mid - 1;
                mid = parseInt((left + right) / 2);
            }
        }

        return ans;

    }

    // Leetcode 844 backspace String Compare

    backspaceStringCompare(s, t) {
        s = this.filterString(s)
        t = this.filterString(t);
        console.log(t.join(""))
        if (s.join("") == t.join("")) return true;
        else return false;
    }

    filterString(s) {
        s = s.split("");
        for (let i = 0; i < s.length; i++) {
            if (s[i] == "#") {
                s.splice(i, 1)
                if (i != 0)
                    s.splice(i - 1, 1)
                break;
            }
        }
        if (s.includes("#")) {
            return this.filterString(s.join(""));
        } else {
            return s;
        }
    }

    maxOperations(nums, k) {
        let count = 0;
        let donePairs = [];
        for (let i = 0; i < nums.length; i++) {
            for (let j = 0; j < nums.length; j++) {
                if (nums[i] + nums[j] == k && i != j && !donePairs.includes(Math.abs(nums[i] - nums[j]))) {
                    count++;
                    donePairs.push(Math.abs(nums[i] - nums[j]));
                }
            }
        }

        console.log(donePairs)

        console.log(count)
    };


    //Leetcode 17. Letter Combinations of a Phone Number
    letterCombinations(digits) {
        let subStrs = [];
        let obj = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz"
        }
        if (digits.length == 0) {
            return [];
        } else if (digits.length == 1 && !digits.includes("1")) {
            console.log(obj[digits].split(""));
        } else if (digits.length == 2 && !digits.includes("1")) {
            subStrs = [];
            let strA = obj[digits[0]];
            let strB = obj[digits[1]];
            for (let i = 0; i < strA.length; i++) {
                for (let j = 0; j < strB.length; j++) {
                    subStrs.push(strA[i] + strB[j]);
                }
            }

            return subStrs;
        } else if (digits.length == 3 && !digits.includes("1")) {
            subStrs = [];
            let strA = obj[digits[0]];
            let strB = obj[digits[1]];
            let strC = obj[digits[2]];

            for (let i = 0; i < strA.length; i++) {
                for (let j = 0; j < strB.length; j++) {

                    for (let k = 0; k < strC.length; k++) {
                        subStrs.push(strA[i] + strB[j] + strC[k]);
                    }
                }
            }

            return subStrs;
        } else if (digits.length == 4 && !digits.includes("1")) {
            subStrs = [];
            let strA = obj[digits[0]];
            let strB = obj[digits[1]];
            let strC = obj[digits[2]];
            let strD = obj[digits[3]];
            for (let i = 0; i < strA.length; i++) {

                for (let j = 0; j < strB.length; j++) {
                    for (let k = 0; k < strC.length; k++) {
                        for (let l = 0; l < strD.length; l++) {
                            subStrs.push(strA[i] + strB[j] + strC[k] + strD[l]);
                        }
                    }
                }
            }

            return subStrs;
        } else return [];



    };

    // Leetcode 216. Combination Sum III
    combinationSum3(k, n) {

    }

    //Leetcode 6. ZigZag Conversion
    ZigZag(s, numRows) {
        let index = 0;
        let str = "";
        while (index != s.length - 1) {
            
            for (let i = 1; i <= numRows; i++) {
                str += s[index];
                index++;
            }

            for (let i = 1; i <= numRows - 2; i++) {
                str += s[index];
                index++;
            }

            index++;
        }

        console.log(index,s.length);

        return str;
    };
}


var cpjs = new CPJS();

//cpjs.findDifference([1,2,3,4,5],[5,6,3,2,7]);
// cpjs.countHillValley([1,2,3,4,5,6,7,1]);
// console.log(cpjs.divideArray([3,2,3,2,2,2]));

// console.log(cpjs.rotate([[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]))

// console.log(cpjs.searchInRotatedAndSortedArray([4,5,6,7,0,1,2],
// 3));

// console.log(cpjs.searchInRotatedAndSortedArraySameElements([1, 0, 1, 1, 1], 0))
// console.log(cpjs.sqrt(10))

// console.log(cpjs.backspaceStringCompare("y#fo##f","y#f#o##f"));

// cpjs.maxOperations([4, 4, 1, 3, 1, 3, 2, 2, 5, 5, 1, 5, 2, 1, 2, 3, 5, 4],2)

// console.log(cpjs.letterCombinations("5678"))

console.log(cpjs.ZigZag("PAYPALISHIRING",3))