class Solution {
public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        
        sort(arr, arr + n);  // step 1
        
        long long count = 0; // step 2

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {  // step 3
                long long summation = arr[i] + arr[left] + arr[right];

                if (summation < sum) {
                    count += (right - left);  // step 4 (core trick)
                    left++;
                } else {
                    right--;
                }
            }
        }

        return count;
    }
};