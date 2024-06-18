//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	bool isprime(int n){
	    if(n<=1) return false;
	    if(n<=3) return true;
	    if(n%2==0 || n%3==0) return false;
	    for(int i=5;i*i<=n;i+=6){
	        if(n%i==0 || n%(i+2)==0) return false;
	    }
	    return true;
	}
	vector<int>AllPrimeFactors(int N) {
	    vector<int>ans;
	    for(int i=1;i<N;i++){
	        if(N%i==0 && isprime(i)) ans.push_back(i);
	    }
	    if(isprime(N)) ans.push_back(N);
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends