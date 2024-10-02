//{ Driver Code Starts
// Initial Template for javascript

"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => { inputString += inputStdin; });

process.stdin.on("end", (_) => {
    inputString =
        inputString.trim().split("\n").map((string) => { return string.trim(); });

    main();
});

function readLine() { return inputString[currentLine++]; }

/* Function to print an array */
function printArray(arr, size) {
    let i;
    let s = "";
    for (i = 0; i < size; i++) {
        s += arr[i] + " ";
    }
    console.log(s);
}

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {
        // let n = parseInt(readLine());
        // let arr = new Array(n);
        let arr = readLine().split(" ").map((x) => parseInt(x));
        // for (let j = 0; j < n; j++) {
        //     arr[j] = inputArr2[j];
        // }
        let obj = new Solution();
        let res = obj.minJumps(arr);
        console.log(res);
    }
}
// } Driver Code Ends


// User function Template for javascript

/**
 * @param {number[]} arr
 * @return {number}
 */

class Solution {
    minJumps(arr) {
        let n=arr.length
        
        if(n<=1) return 0;
        if(arr[0]==0) return -1;
        
        let jumps=0,far=0,maxi=0;
        
        for(let i=0;i<n-1;i++){
            far=Math.max(far,i+arr[i])
            if(maxi==i){
                jumps++
                maxi=far
                if(maxi>=n-1) return jumps;
            }
        }
        return -1    }
}