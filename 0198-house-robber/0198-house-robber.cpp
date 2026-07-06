class Solution {
public:
    int sol_mem(vector<int>& nums,vector<int>& dp,int i){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int ans=0;
        
        // if(i+1<nums.size())
         ans=max(nums[i]+sol_mem(nums,dp,i+2),sol_mem(nums,dp,i+1));
         dp[i]=ans;
        return ans;
    }
    int rob(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        vector<int>dp(n+1,-1);

        ans=sol_mem(nums,dp,0);
        return ans;
    }
};