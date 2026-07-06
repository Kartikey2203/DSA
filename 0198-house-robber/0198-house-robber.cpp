class Solution {
public:
    int sol_mem(vector<int>& nums,vector<int>& dp,int i){
        // if(i>=nums.size()){
        //     return 0;
        // }
        // if(dp[i]!=0){
        //     return dp[i];
        // }
        int ans=0;
        // dp[i-1]=nums[i-1];
        // dp[1]=nums[1];
        // if(i+1<nums.size())
        for(int j=i-1; j>=0; j--){
         dp[j]=max(nums[j]+dp[j+2],dp[j+1]);
        }
        return dp[0];
    }
    int rob(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        vector<int>dp(n+2,0);

        ans=sol_mem(nums,dp,n);
        return ans;
    }
};