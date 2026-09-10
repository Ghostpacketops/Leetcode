class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maximum = 0;

        for ( int num:nums){
            if (num == 1){
                count ++;
                maximum = max(maximum, count);
            } else {
                count = 0;
            }
        }
        return maximum;
    }
};