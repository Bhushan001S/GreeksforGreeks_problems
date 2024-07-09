//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        sort(arr.begin(),arr.end());
        int ans=0;
        int mini=INT_MAX;
        for(int i=0;i<arr.size()-2;i++){
            int first=arr[i];
            int j=i+1;
            int k=arr.size()-1;
            while(j<k){
                int second=arr[j];
                int third=arr[k];
                int s=first+second+third;
                if(s==target) return target;
                if(abs(s-target)<mini || (abs(s-target)==mini && s > ans)){
                    mini=abs(s-target);
                    ans=s;
                }
                if(s<target){
                    j++;
                }else k--;
            }
        }
        return ans;
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends