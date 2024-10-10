//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        int n=x.size();
        
        stack<int>st;
        
        for(auto it:x){
            if(it==')' || it== ']' || it=='}'){
                if(st.empty()) return false;
                else {
                    if((it==')' && st.top()=='(') || (it==']' && st.top()=='[') || (it=='}' && st.top()=='{')){
                        st.pop();
                    }else return false;
                }
            }else st.push(it);
        }
        
        if(!st.empty()) return false;
        return true;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends