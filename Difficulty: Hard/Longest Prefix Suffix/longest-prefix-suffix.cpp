//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Hash{
    private:
    const long long mod1=999999929;

    const long long p1=1001; 

    public:
    vector<long long>pref1;
    vector<long long>base_pow1;
    string s;
    long long n;
    
    Hash(const string &a)
    {
        s=a;
        n=s.length();
        pref1.assign(n+1,0);
        base_pow1.assign(n+1,0);
        build();
    }
    void build()
    {
        base_pow1[0]=1;
        
        pref1[0]=1;

        for(int i=1;i<=n;i++)
        {
            base_pow1[i]=(base_pow1[i-1]*p1)%mod1;

            pref1[i]=((pref1[i-1]*p1)%mod1+s[i-1]+997)%mod1;
            
        }
        
    }
    
    long long getHash(int l,int r)
    {
        long long h1=pref1[r+1];
        
        h1-=(pref1[l]*base_pow1[r-l+1])%mod1;
        h1=(h1%mod1+mod1)%mod1;

        return h1;
    }
};
class Solution {
  public:
    int lps(string str) {
        // Your code goes here
        Hash h(str);
        
        int n=(int)str.length();
        
        for(int len=n-1;len>=1;len--)
        {
            if(h.getHash(0,len-1)==h.getHash(n-len,n-1))
            return len;
        }
        
        return 0;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends