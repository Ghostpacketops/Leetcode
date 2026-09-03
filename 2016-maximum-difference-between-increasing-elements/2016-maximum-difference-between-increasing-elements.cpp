class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minVal = nums[0];
        int ans = -1;

    for (int i = 1; i<nums.size(); i++){
        if (nums[i]>minVal){
            ans = max(ans,nums[i]- minVal);
        }else {
            minVal = nums[i];
        }
    }
    return ans;
    }
};