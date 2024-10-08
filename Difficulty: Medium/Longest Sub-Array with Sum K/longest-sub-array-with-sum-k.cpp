//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        
        unordered_map<int,int>map;
        
        int sum=0,maxLen=0;
        
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==k) maxLen=i+1;
            
            if(map.find(sum-k) !=map.end()){
                maxLen=max(maxLen,i-map[sum-k]);
            }
            
            if(map.find(sum)==map.end()) map[sum]=i;
        }
        return maxLen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends