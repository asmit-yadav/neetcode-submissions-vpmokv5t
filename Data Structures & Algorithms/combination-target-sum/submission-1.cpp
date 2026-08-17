class Solution {
public:

    void helper(vector<int>& nums, int target,int start,vector<vector<int>>&ans,vector<int>temp)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<nums.size();i++)
        {
            if(nums[i]>target)
            continue;
            temp.push_back(nums[i]);
            helper(nums,target-nums[i],i,ans,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        helper(nums,target,0,ans,temp);
        return ans;
    }
};
