class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size())
        return false;
        
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']+=1;
        }
        for(int i=0;i<t.size();i++)
        {
            freq[t[i]-'a']-=1;
        }
        int sum=0;
        for(auto i: freq)
        {
        if(i>=0)
           sum+=i; 
        }
        return sum==0;

    }
};
