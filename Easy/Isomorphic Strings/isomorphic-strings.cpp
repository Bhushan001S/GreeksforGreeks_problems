//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
         if(str1.size() != str2.size())
            return false;
        
        int n = str1.size();
        unordered_map<char, char> mp1, mp2;
        
        for(int i=0; i<n; i++) {
            
            char first = str1[i];
            char second = str2[i];
            
            if(mp1[first] || mp2[second]) {
                if(mp1[first] != second || mp2[second] != first)
                    return false;
            }
            else {
                mp1[first] = second;
                mp2[second] = first;
            }
        }
        
        return true;   
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends