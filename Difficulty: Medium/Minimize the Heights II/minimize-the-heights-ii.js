//{ Driver Code Starts
// Initial Template for javascript

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString =
        inputString.trim().split('\n').map(string => { return string.trim(); });

    main();
});

function readLine() { return inputString[currentLine++]; }

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {
        let k = parseInt(readLine());
        let arr = readLine().split(' ').map(x => parseInt(x));
        let obj = new Solution();
        console.log(obj.getMinDiff(arr, k));
    }
}
// } Driver Code Ends


// User function Template for javascript
/**
 * @param {number[]} arr
 * @param {number} k
 * @returns {number}
 */

class Solution {
    // Function to get the minimum difference between the heights.
    getMinDiff(arr, k) {
        let n=arr.length
        if(n==1) return 0
        
        arr.sort((a, b) => a - b)
        
        let height=arr[n-1]-arr[0]
        let maxi=arr[n-1]-k
        let mini=arr[0]+k
        for(let i=0;i<n-1;i++){
            let small=Math.min(mini,arr[i+1]-k)
            let high=Math.max(maxi,arr[i]+k)
            
            if(small<0) continue
            
            height=Math.min(height,high-small)
        }
        return height
    }
}

