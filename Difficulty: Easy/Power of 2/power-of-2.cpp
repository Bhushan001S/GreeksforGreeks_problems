//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n) {
        int c=0;
        while(n){
            int rem=n%2;
            if(rem==1) c++;
            if(c>1) return 0;
            n/=2;
        }
        
        return (c==1) ? 1:0;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {

    int t;
    cin >> t; // testcases

    for (int i = 0; i < t; i++) {
        long long n; // input a number n
        cin >> n;
        // if (n == 11) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        if (ob.isPowerofTwo(n)) // Now, if log2 produces an integer not decimal then we
                                // are sure raising 2 to this value
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }

    return 0;
}

// } Driver Code Ends