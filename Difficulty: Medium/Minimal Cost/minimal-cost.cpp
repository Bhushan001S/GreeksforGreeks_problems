//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int solve(int i,int k,vector<int>&h,vector<int>&dp){
        if(i==h.size()-1) return 0;
        
        if(dp[i]!=-1) return dp[i];
        
        int ans=INT_MAX;
        
        for(int j=k;j>=1;j--){
            if(i+j<h.size()){
                int temp=abs(h[i]-h[i+j]) + solve(i+j,k,h,dp);
                ans=min(temp,ans);
            }
        }
        return dp[i]=ans;
    }
    
    int minimizeCost(int k, vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n,-1);
        return solve(0,k,arr,dp);
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minimizeCost(k, arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends