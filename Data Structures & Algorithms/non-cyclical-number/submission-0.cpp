class Solution {
public:

    int helper(int n)
    {
        int sum = 0;
        while (n)
        {
            int r = n % 10;
            sum += r * r;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        
        unordered_set<int> st;

        while (true)
        {
            n = helper(n);

            if (n == 1)
                return true;

            if (st.find(n) != st.end())
                return false;

            st.insert(n);
        }
    }
};