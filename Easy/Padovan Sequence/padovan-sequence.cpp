//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    long long MOD=1e9+7;
    int padovanSequence(int n)
    {
        
    
    if(n<3) return 1;
       int ans[n+1];
       for(int i=0;i<=n;i++){
           if(i<3) ans[i]=1;
           else ans[i]=(ans[i-2]+ans[i-3])%MOD;
       }
       return ans[n];
    }
    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends