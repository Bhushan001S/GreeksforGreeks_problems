//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        
        int pro=1,c=0;
        
        for(int i:arr){
            if(i==0) c++;
            else pro*=i;
        }
        vector<int>ans;
        
        if(c>1) return vector<int>(arr.size(),0);
        
        if(c==1){
            for(auto it:arr){
                if(it==0) ans.push_back(pro);
                else ans.push_back(0);
            }
            return ans;
        }
        
        for(auto it:arr) ans.push_back(pro/it);
        return ans;
        
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
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends