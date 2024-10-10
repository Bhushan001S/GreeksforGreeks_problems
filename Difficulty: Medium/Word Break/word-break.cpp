//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    bool solve(int ind,string &s,int len,unordered_map<string,int>&mp){
         if(ind ==len) return true;
         
         for(int i=ind;i<len;i++){
             if(mp.find(s.substr(ind,i-ind+1)) != mp.end()){
                 if(solve(i+1,s,len,mp)) return true;
             }
         }
         return false;
    }
    
    int wordBreak(int n, string s, vector<string> &dictionary) {
        unordered_map<string,int>mp;
        for(auto it:dictionary) mp[it]=1;
        
        return solve(0,s,s.size(),mp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends