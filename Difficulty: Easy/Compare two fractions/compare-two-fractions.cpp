//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        vector<string> val;
    stringstream ss(str);
    string temp;

    // Split the input string by comma and space
    while (getline(ss, temp, ',')) {
        size_t start = temp.find_first_not_of(" ");
        size_t end = temp.find_last_not_of(" ");
        val.push_back(temp.substr(start, end - start + 1));
    }

    float num1 = 0;
    float num2 = 0;

    for (int i = 0; i < 2; i++) {
        vector<string> nums;
        stringstream ss2(val[i]);
        string temp2;

        // Split each fraction by '/'
        while (getline(ss2, temp2, '/')) {
            nums.push_back(temp2);
        }

        if (i == 1) {
            num2 = stof(nums[0]) / stof(nums[1]);
        } else {
            num1 = stof(nums[0]) / stof(nums[1]);
        }
    }

    if (num1 == num2) return "equal";
    if (num1 > num2) return val[0];
    return val[1];
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends