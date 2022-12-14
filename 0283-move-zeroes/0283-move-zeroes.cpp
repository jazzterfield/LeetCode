class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int t = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                nums[t++] = nums[i];
            }
        }
        
        for (int i = t; i < nums.size(); ++i) {
            nums[i] = 0;
        }
    }
};