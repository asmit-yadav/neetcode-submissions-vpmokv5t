class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       vector<int>ans;

       int n=digits.size()-1;
       int sum=digits[n]+1;

       int carry=0;
       if(sum<10){
        digits[n]=sum;
       return digits;}
       else
       {
          carry=sum/10;
          ans.push_back(sum%10);
          for(int i=n-1;i>=0;i--)
          {
            sum=carry+digits[i];
            ans.push_back(sum%10);
            if(sum>9){
                carry=sum/10;
            }   
            else
            carry=0;
          }
       }
       if(carry!=0)
       ans.push_back(carry);
       reverse(ans.begin(),ans.end());
       return ans;
    }
};
