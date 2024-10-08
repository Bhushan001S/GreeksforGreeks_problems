//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
    void solve(string &s, set<string> &ans, int index) {
        if(index == s.size()) {
            ans.insert(s);  // Use set to avoid duplicates
            return;
        }

        for(int i = index; i < s.size(); i++) {
            swap(s[index], s[i]);
            solve(s, ans, index + 1);
            swap(s[index], s[i]);  // Backtrack
        }
    } 

    vector<string> find_permutation(string s) {
        set<string> ans_set;
        vector<string> ans;
        solve(s, ans_set, 0);
        ans.assign(ans_set.begin(), ans_set.end());  // Convert set to vector
        return ans;
    }
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends