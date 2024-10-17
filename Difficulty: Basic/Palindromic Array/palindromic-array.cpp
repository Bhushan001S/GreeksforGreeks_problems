//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
  public:
  bool solve(int n){
      
      if(n<10) return true;
      string val=to_string(n);
      int i=0,j=val.size()-1;
      while(i<j){
          if(val[i]!=val[j]) return false;
          i++;
          j--;
      }
      return true;
  }
    bool PalinArray(vector<int> &arr) {
        
        for(auto it:arr){
            if(solve(it)) continue;
            else return false;
        }
        
        return true;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << (ob.PalinArray(arr) ? "true" : "false") << endl;
    }

    return 0;
}

// } Driver Code Ends