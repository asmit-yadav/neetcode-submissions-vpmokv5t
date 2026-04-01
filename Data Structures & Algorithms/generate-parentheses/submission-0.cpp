class Solution {
public:
    void isValid(int n , int l , int r , vector<string>&ans,string temp)
    {
        if(l==n && r==l)
        {
            ans.push_back(temp);
            return;
        }

        if(l<n)
        isValid(n,l+1,r,ans,temp+'(');
        if(r<l)
        isValid(n,l,r+1,ans,temp+')');
    }
    vector<string> generateParenthesis(int n) {
       vector<string>ans;
       isValid(n,0,0,ans,"");
       return ans;

    }
};
