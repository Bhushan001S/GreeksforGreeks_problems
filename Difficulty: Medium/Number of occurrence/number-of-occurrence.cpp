//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int count=binary(arr,n,x,true);
	    if(count==-1) return 0;
	    int last=binary(arr,n,x,false);
	    
	    return last-count+1;
	}
	
	int binary(int arr[], int n, int x,bool flag){
	    int s=0;
	    int e=n-1;
	    
	    int count=-1;
	    
	    while(s<=e){
	        int mid=s+(e-s)/2;
	        
	        if(arr[mid]>x) e=mid-1;
	        else if(arr[mid]<x) s=mid+1;
	        else{
	            count=mid;
	            if(flag) e=mid-1;
	            else s=mid+1;
	        }
	        
	        
	    }
	    return count;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends