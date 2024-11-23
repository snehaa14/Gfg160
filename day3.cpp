class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int i;
        
        // Step 1: Find the first index `i` such that arr[i] < arr[i+1]
        for (i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) break;
        }

        if (i >= 0) 
        {
            // Step 2: Find the smallest element greater than arr[i] to the right
            int j = n - 1;
            while (arr[j] <= arr[i]) j--;
            swap(arr[i], arr[j]);
        }

        reverse(arr.begin() + i + 1, arr.end());
    }
};