//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int n) {
        if(n<=0 ||( n&(n-1))!=0){
            return -1;
        }
        int ans=1;
        
        while((n&1) ==0){
            ans++;
            n>>=1;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends