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
        stack<char>st;
        
        for(char i:x){
            if(i=='}' || i==']' || i==')'){
                if(st.empty()) return false;
                else{
                    char top=st.top();
                    if((top=='(' && i==')') || (top=='{' && i=='}') || (top=='[' && i==']')){
                        st.pop();
                    }else return false;
                }
            }
            else st.push(i);
        }
        
        return st.empty();
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