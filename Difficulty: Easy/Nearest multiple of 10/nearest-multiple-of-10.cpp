//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        int n=str.size();
        
        int j=n-1;
        
        if(str[j] >'5'){
            str[n-1] = '0';
            int i = n-2; bool flag = false;
            while ( i >= 0 ){
                if ( str[i] == '9' ) str[i] = '0';
                else {
                    str[i]++;
                    flag = true;
                    break;
                } i--;
            } if ( !flag ) str = '1' + str;
        }
            
        str[j]='0';
        
        return str;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends