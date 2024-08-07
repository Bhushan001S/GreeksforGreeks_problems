//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int>ans(2,0);
        vector<int>hashset(n+1,0);
        int missing=0;
          //brute approach 
          for(int i=0;i<n;i++) hashset[arr[i]]+=1;
          
          for(int i=1;i<=n;i++){
              if(hashset[i]==2 ) ans[0]=i;
              if(hashset[i]==0) ans[1]=i;
            }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends