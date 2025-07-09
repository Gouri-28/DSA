class Solution {
public:
    int check(string s)
    {
        int n = s.size(), ans = 0;
        for(int i = 0; i < (n / 2); i++)
        {
            if(s[i] != s[n - i - 1])
                ans++;
        }
        return ans;
    }
    int dp[101][101];
    int rec(string s, int i, int prev, int k)
    {
        if(k == 1)
        {
            if(i == s.size())   return 1e9;
            return check(s.substr(i));
        }
        if(i == s.size())   return 1e9;
        if(dp[prev][k] != -1)   return dp[prev][k];
        int cut = check(s.substr(prev, (i - prev + 1))) + rec(s, i + 1, i + 1, k - 1);
        int notCut = rec(s, i + 1, prev, k);
        return dp[prev][k] = min(cut, notCut);
    }
    int palindromePartition(string s, int k) {
        memset(dp, -1, sizeof(dp));
        return rec(s, 0, 0, k);
    }
};