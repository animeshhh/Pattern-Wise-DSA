//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        
        // Edge case
        if (n < k) return -1;

        // Step 1: Sum of first window
        int windowSum = 0;
        for (int i = 0; i < k; i++) {
            windowSum += arr[i];
        }

        int maxSum = windowSum;

        // Step 2: Slide the window
        for (int i = k; i < n; i++) {
            windowSum += arr[i];       // add next element
            windowSum -= arr[i - k];   // remove previous element
            
            maxSum = max(maxSum, windowSum);
        }

        return maxSum;
    }
};