//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int sum=0,l=0,maxL=0;
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==k) maxL=max(maxL,i+1);
            if(mp.find(sum)==mp.end()) mp[sum]=i;
            if(mp.find(sum-k)!=mp.end()) maxL=max(maxL,i-mp[sum-k]);
            
        }
        return maxL;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends