//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    int dx[8]={0,1,1,1,0,-1,-1,-1};
    int dy[8]={1,1,0,-1,-1,-1,0,1};
    void dfs(std::vector<std::vector<char>>& grid, std::vector<std::vector<bool>>& visited,int i,int j,int n,int m){
        visited[i][j] = true;
        for (int k = 0; k < 8; k++) {
            int nextidx_x = i + dx[k];
            int nextidx_y = j + dy[k];
            if (nextidx_x >= 0 && nextidx_x < n && nextidx_y >= 0 && nextidx_y < m && grid[nextidx_x][nextidx_y] == '1' && !visited[nextidx_x][nextidx_y]) {
                dfs(grid, visited, nextidx_x, nextidx_y, n, m);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
         int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    dfs(grid,visited,i,j,n,m);
                    ans++;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends