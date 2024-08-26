//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method*/
    bool allstars(string &pattern, int i){
        for(int j=0; j<i; j++){
            if(pattern[j] != '*'){
                return false;
                break;
            }
        }
        return true;
    }
    bool helper(string &pattern, string &str, int i, int j, vector<vector<int>> &dp){
        if(i<0 && j<0) return true;
        if(j<0 && i>=0){
            return allstars(pattern, i);
        }
         if(i < 0 &&  j >= 0) return false;
        if(dp[i][j] != -1) return dp[i][j];
        if(pattern[i] == str[j] || pattern[i] == '?'){
           dp[i][j] = helper(pattern, str, i-1, j-1, dp);
        }else{
            if(pattern[i] == '*'){
                return dp[i][j] = helper(pattern, str, i-1, j, dp) || helper(pattern, str, i, j-1, dp);
            }else{
                  return false;
            }
        }
        
    }
    int wildCard(string pattern, string str) {
        int n = pattern.size();
        int m = str.size();
        vector<vector<int>> dp(n, vector<int> (m, -1));
        return helper(pattern, str, n-1, m-1, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, text;
        cin >> pat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> text;
        Solution obj;
        cout << obj.wildCard(pat, text) << endl;
    }
}

// } Driver Code Ends