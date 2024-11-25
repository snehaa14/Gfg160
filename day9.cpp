//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
     int maxSum(vector<int>&nums){
        int result=INT_MIN;
        int csum=0;
        for(auto&val:nums){
            csum+=val;
            result=max(result,csum);
            if(csum<0)csum=0;
        }
        return result;
    }
    int minSum(vector<int>&nums){
        int result=INT_MAX;
        int csum=0;
        for(auto&val:nums){
            csum+=val;
            result=min(result,csum);
            if(csum>0)csum=0;
        }
        return result;
    }
    int circularSubarraySum(vector<int> &arr) {
        int totalSum=accumulate(arr.begin(),arr.end(),0);
        int maxsum=maxSum(arr);
        int minsum=minSum(arr);
        return max(maxsum,(totalSum-minsum));
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends