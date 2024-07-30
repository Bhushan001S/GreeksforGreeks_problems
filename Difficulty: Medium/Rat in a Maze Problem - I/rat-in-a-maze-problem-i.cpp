//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  int row[4]={1,-1,0,0};
  int col[4]={0,0,1,-1};
  public:
  void solve(vector<vector<int>> &mat,int i,int j,string ans,int n,vector<vector<int>> &vis,vector<string>&res)
  {
      
      
     
      if(i==n-1 && j==n-1)
      {
          res.push_back(ans);
          return ;
      }
     
      for(int k=0;k<4;k++)
      {
          
          int nr=row[k]+i;
          int nc=col[k]+j;
          
          if(  nr>=0 && nr<n && nc>=0 && nc<n  && mat[nr][nc]==1 && vis[nr][nc]!=1)
          {
              vis[nr][nc]=1;
              if(k==0)
              solve(mat,nr,nc,ans+"D",n,vis,res);
              else if(k==1)
               solve(mat,nr,nc,ans+"U",n,vis,res);
               else if(k==2)
                solve(mat,nr,nc,ans+"R",n,vis,res);
                else 
                 solve(mat,nr,nc,ans+"L",n,vis,res);
                 
                 vis[nr][nc]=0;
              
              
          }
      }
  }
  
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        int n=mat.size();
        
        vector<vector<int>>vis(n,vector<int>(n,0));
        vector<string>res;
        if(mat[0][0]==1)
        {
            vis[0][0]=1;
         solve(mat,0,0,"",n,vis,res);
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends