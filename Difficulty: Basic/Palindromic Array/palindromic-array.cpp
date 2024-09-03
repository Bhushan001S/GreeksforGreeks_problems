//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
  public:
    bool isPali(int x){
        vector<int>digit;
        
        while(x>0){
            digit.push_back(x%10);
            x/=10;
        }
        
        vector<int>check=digit;
        reverse(digit.begin(),digit.end());
        
        return check==digit;
    }
    bool PalinArray(vector<int> &arr) {
        
        for(auto it:arr){
            if(isPali(it)){
                continue;
            }else return 0;
        }
        
        return 1;
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