// https://kkminseok.github.io/posts/leetcode_House_Robber_II/
class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        
        vector<int> dp1(nums.size(), 0);
        vector<int> dp2(nums.size(), 0);
        
        dp1[0] = nums[0];
        dp1[1] = nums[0];
        
        dp2[0] = 0;
        dp2[1] = nums[1];
        
        for (size_t i = 2;i < nums.size(); ++i) {
            if (i != nums.size() - 1) {
                dp1[i] = max(dp1[i - 2] + nums[i], dp1[i - 1]);
            }
            dp2[i] = max(dp2[i - 2] + nums[i], dp2[i - 1]);
        }
        
        int result = max(dp1[nums.size() - 2], dp2[nums.size() - 1]);
        
        return result;
    }
};