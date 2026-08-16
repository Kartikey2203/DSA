class Solution {
public:
    int mem(vector<int>& coins, int amount,int i,vector<vector<int>>& dp){
        if (amount == 0) return 0;          // need 0 more coins
    if (amount < 0) return INT_MAX;     // invalid
    if (i >= coins.size()) return INT_MAX;
    if(dp[amount][i]!=-1)
        return dp[amount][i];
    int take=mem(coins,amount-coins[i],i,dp);
        if(take!=INT_MAX)
            take=take+1;
        int exc=mem(coins,amount,i+1,dp);
        int ans= min(take,exc);
        dp[amount][i]=ans;
        return ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(amount+1,vector<int>(coins.size(),-1));
        int ans=mem(coins,amount,0,dp);
        return ans!=INT_MAX?ans:-1;
        // int s=coins.size();
        // vector<vector<int>>dp(s+1,vector<int>(amount+1,0));
        // vector<int> d(amount+1,0);
        // for(int i=0; i<s; i++){
        //     // for(int j=0; j<=amount; j++){
        //         // dp[i][j]=1+min()
        //         d[i]=(target-coins[i])
        //     }
        // }
    }
};