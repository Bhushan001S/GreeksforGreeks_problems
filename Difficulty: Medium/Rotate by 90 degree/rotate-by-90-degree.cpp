//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& matrix) {
   for(vector<int>& row : matrix) {
        reverse(row.begin(), row.end()); // Reverse the row to prepare for the next step
    }
    
    int n = matrix.size(); // Size of the matrix (n x n)
    
    // Step 2: Transpose the elements across the secondary diagonal
    for(int i = 0; i < n; ++i) { // Iterate through each row
        for(int j = 0; j < n - i - 1; ++j) { // Iterate through elements above the secondary diagonal
            int r = n - 1 - j; // Corresponding row index for swap
            int c = n - 1 - i; // Corresponding column index for swap
            swap(matrix[i][j], matrix[r][c]); // Swap elements to rotate them
        }
    }
}


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > matrix(n);
        for (int i = 0; i < n; i++) {
            matrix[i].resize(n);
            for (int j = 0; j < n; j++)
                cin >> matrix[i][j];
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j] << " ";
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends