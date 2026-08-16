class Solution {
public:
    int climbStairs(int n, unordered_map<int, int>& memo) {
        if ( n == 2 || n==1) {
            return n;
        }
        if (memo.find(n) == memo.end()) {
            memo[n] = climbStairs(n-1, memo) + climbStairs(n-2, memo);
        }
        return memo[n];
    }
    int tab(int n,vector<int>& dp){
        if ( n == 2 || n==1) {
            return n;
        }
        dp[1]=1;
        dp[2]=2;
        for(int i=3; i<=n; i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];

    }

    int climbStairs(int n) {
        unordered_map<int, int> memo;
        vector<int> dp(n+1,0);
        return tab(n,dp);
        // return climbStairs(n, memo);
    }
};