//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
// 	#define ll long long
	long long countStrings(int n) {
	    int m=1e9+7;
	    long long a=2,b=3;
	    
	    for(int i=2;i<=n;i++){
	        long long temp=(a+b)%m;
	        a=b;
	        b=temp;
	    }
	    return a;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends