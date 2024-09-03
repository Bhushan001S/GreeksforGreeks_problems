//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	vector<vector<int>>memo;
    int dp(int i,int j,string &str1, string &str2)
    {
        if(i<0||j<0)
        {
            return 0;
        }
        if(memo[i][j]!=-1)
        {
            return memo[i][j];
        }
        if(str1[i]==str2[j])
        {
            memo[i][j]=1+dp(i-1,j-1,str1,str2); 
        }
        else
        {
            memo[i][j]=max(dp(i-1,j,str1,str2),dp(i,j-1,str1,str2));
        }
        return memo[i][j];
    }
    
    int minOperations(string str1, string str2) 
    { 
       int i=str1.size();
        int j=str2.size();
        memo.resize(i+1,vector<int>(j+1,-1));
        int lcs_length=dp(i-1,j-1,str1,str2);
        int deletions=i-lcs_length;
        int insertions=j-lcs_length;
        return deletions+insertions;
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends