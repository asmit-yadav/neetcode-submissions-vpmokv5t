class Solution {
public:
    void helper(vector<int>& nums,int target,vector<vector<int>>& ans,vector<int>& temp,int start)
    {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = start; i < nums.size(); i++) {

            if (nums[i] > target)
                continue;

            // Choose
            temp.push_back(nums[i]);

            // Explore
            helper(nums, target - nums[i], ans, temp, i);

            // Undo
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        vector<vector<int>> ans;
        vector<int> temp;

        helper(nums, target, ans, temp, 0);

        return ans;
    }
};