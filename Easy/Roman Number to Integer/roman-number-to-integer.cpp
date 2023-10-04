//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        map<char,int>mpp;
        int sum=0;
        
        vector<int> v;
    
        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000;
        
        for(int i=0;i<str.size();i++){
            v.push_back(mpp[str[i]]);
        }
        for(int i=1;i<v.size();i++){
            if(v[i]>v[i-1]) {
                v[i]-=v[i-1];
                v[i-1]=0;
            }
        }
        return accumulate(v.begin(),v.end(),0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends