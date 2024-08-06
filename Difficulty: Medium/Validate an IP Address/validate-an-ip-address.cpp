//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
  public:
    int isValid(string str) {
        int dotCnt=0;
        str.push_back('.');
        string res="";
        for(int i=0;i<str.length();i++){
            
            if(str[i]!='.')
            res+=str[i];
            else{
                int num=stoi(res);
                if(res.length()>3 || res.length()==0)
                return false;
                if(res[0]=='0' && res.length()>1)
                return false;
                if(num>255)
                return false;
                dotCnt++;
                res.clear();
            }
            
        }
        if(dotCnt!=4)
        return false;
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends