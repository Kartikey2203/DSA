class Solution {
public:
    int mem(vector<int>& nums,int ind,vector<int>& dp){
        if(ind >=nums.size()){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int inc=nums[ind]+mem(nums,ind+2,dp);
        int exc=mem(nums,ind+1,dp);
        dp[ind]= max(inc,exc);
        return dp[ind];
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return mem(nums,0,dp);
    }
};