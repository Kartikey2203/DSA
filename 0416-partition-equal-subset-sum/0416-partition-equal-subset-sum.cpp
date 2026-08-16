class Solution {
public:
    bool mem(vector<int>& nums,int tar,int i,vector<vector<int>>& dp){
        if(tar==0)
            return true;
        else
        if(tar<0 || i>=nums.size())
            return false;
        if(dp[i][tar]!=-1){
            return dp[i][tar];
        }
        int inc=mem(nums,tar-nums[i],i+1,dp);
        int exc=mem(nums,tar,i+1,dp);

        dp[i][tar]=(inc || exc);
        return dp[i][tar];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0,tar;
        for(int num:nums)
            sum+=num;
        if(sum%2)
            return false;
        tar=sum/2;
        vector<vector<int>> dp(nums.size()+1,vector<int>(tar+1,-1));
            return mem(nums,tar,0,dp);
    }
};