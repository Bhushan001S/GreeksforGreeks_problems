//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        int n=arr.size();
       int count=0;
       string ans="";
       string temp=arr[0];
       for(int i=0;i<temp.size();i++){
           for(int j=0;j<n;j++){
               if(arr[j][i]==temp[i]) count++;
           }
           if(count==n) ans+=temp[i];
           else break;
           count=0;
       }
       return (ans=="")?"-1":ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends