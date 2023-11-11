//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string s){
        string str="";
        char a='1';
        int n=s.size();
        while(int(str.size())<=n) {str.push_back(a); a+=1;}
        for(int i=0; i<n; ){
            int j=i+1;
            if (s[i]=='D'){
                while(j<n and s[j]==s[i]) j++;
                int cnt = j-i;
                reverse(str.begin()+i, str.begin()+i+cnt+1);
            }
            i=j;
        }
        return str;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends