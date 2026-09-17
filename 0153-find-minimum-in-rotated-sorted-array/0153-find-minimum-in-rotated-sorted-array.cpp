class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[high]) {
                // Minimum is on the right side
                low = mid + 1;
            }
            else {
                // Minimum is at mid or on the left side
                high = mid;
            }
        }

        return nums[low];
    }
};