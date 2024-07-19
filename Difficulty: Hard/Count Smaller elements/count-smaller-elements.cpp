//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

class Solution {
    private:
        void mergeSort(vector<pair<int, int>>& nums, vector<int>& ans, int left, int right) {
            if (left >= right) return;
            
            int mid = left + (right - left) / 2;
            mergeSort(nums, ans, left, mid);
            mergeSort(nums, ans, mid + 1, right);
            
            merge(nums, ans, left, mid, right);
        }
        
        void merge(vector<pair<int, int>>& nums, vector<int>& ans, int left, int mid, int right) {
            vector<pair<int, int>> temp(right - left + 1);
            int i = left, j = mid + 1, k = 0, rightCount = 0;
            
            while (i <= mid && j <= right) {
                if (nums[i].first <= nums[j].first) {
                    ans[nums[i].second] += rightCount;
                    temp[k++] = nums[i++];
                } else {
                    rightCount++;
                    temp[k++] = nums[j++];
                }
            }
            
            while (i <= mid) {
                ans[nums[i].second] += rightCount;
                temp[k++] = nums[i++];
            }
            
            while (j <= right) {
                temp[k++] = nums[j++];
            }
            
            for (int i = left; i <= right; ++i) {
                nums[i] = temp[i - left];
            }
        }
    
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans(n, 0);
        vector<pair<int, int>> nums;
        
        for (int i = 0; i < n; ++i) {
            nums.push_back({arr[i], i});
        }
        
        mergeSort(nums, ans, 0, n - 1);
        
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
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends