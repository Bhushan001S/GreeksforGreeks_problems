//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        stack<char>st;
        reverse(str.begin(),str.end());
        string ans="";
        for(char i:str){
            if(i=='.'){
                if(st.empty()) return ans;
                else{
                    while(!st.empty()){
                        ans+=st.top();
                        st.pop();
                    }
                    ans.push_back('.');
                }
                
            }else st.push(i);
        }
        if(!st.empty()){
            while(!st.empty()){
                        ans+=st.top();
                        st.pop();
                    }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends