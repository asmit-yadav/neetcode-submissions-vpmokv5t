class Solution {
public:
    int helper(vector<int>& nums,int low,int high, int target)
    {
        int mid=low+(high-low)/2;

        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>target)
            high=mid-1;
            else
            low=mid+1;
            
        }
        return -1;

    }
    int search(vector<int>& nums, int target) {
        
        return helper(nums,0,nums.size()-1,target);
    }
};
