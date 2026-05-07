class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        if(nums.size()==0)
        return 0;
        int ans=1;
        int cnt=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]!=nums[i]){
                if(nums[i]-nums[i-1]==1){
                    cnt+=1;
                }
                else
                {
                    cnt=1;
                }
            }
            ans=max(ans,cnt);
        }
        
        return ans;
    }
};
