//{ Driver Code Starts
//Initial Template for javascript

"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .trim()
    .split("\n")
    .map((string) => {
      return string.trim();
    });

  main();
});

function readLine() {
  return inputString[currentLine++];
}


function main() {
  let t = parseInt(readLine());
  let i = 0;
 
  for (; i < t; i++) {
    let S = readLine().trim();    
    let obj = new Solution();
    let res = obj.longestPalin(S);
    console.log(res);
  }

}
// } Driver Code Ends


//User function Template for javascript

/**
 * @param {string} S
 * @return {string} 
*/

class Solution {
  longestPalin(s){
        let n=s.length;
        let start=0,end=0;
        
        let low,high;
        
        for(let i=1;i<s.length;i++){
            
            low=i-1;
            high=i;
            
            while(low>=0 && high<n && s[low]==s[high]){
                
                if(high-low+1 > end){
                    end=high-low+1;
                    start=low;
                }
                low--;high++;
            }
            
            low=i-1;
            high=i+1;
            
            while(low>=0 && high<n && s[low]==s[high]){
                
                if(high-low+1 > end){
                    end=high-low+1;
                    start=low;
                }
                low--;high++;
            }
        }
        
        if(end==0) return s.substr(start,1);
        return s.substr(start,end);
            
  }
}