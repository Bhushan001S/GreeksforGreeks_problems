//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	void solve(int ind,string &s,int n,vector<string>&ans,string temp){
	    
	    if(!temp.empty()) ans.push_back(temp);
	    if(ind == n) return ;
	    
	    for(int i=ind;i<n;i++){
	        solve(i+1,s,n,ans,temp+s[i]);
	    }
	}
	
	vector<string> AllPossibleStrings(string s){
	    vector<string>ans;
	    string temp;
	    
	    solve(0,s,s.size(),ans,temp);
	    sort(begin(ans),end(ans));
	    
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends