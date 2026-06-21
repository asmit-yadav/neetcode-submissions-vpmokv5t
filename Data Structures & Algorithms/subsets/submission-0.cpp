class Solution {
public:
    void helper(vector<int>& nums,int i,int n,vector<int>&help,vector<vector<int>>&ans)
    {
        if(i==n)
        {
            ans.push_back(help);
            return;
        }
       
        helper(nums,i+1,n,help,ans);
        help.push_back(nums[i]);
        helper(nums,i+1,n,help,ans);
        help.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>help;
        helper(nums,0,nums.size(),help,ans);
        return ans;
    }
};
