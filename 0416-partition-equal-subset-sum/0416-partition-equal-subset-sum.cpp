class Solution {
public:
    bool mem(vector<int>& nums,int tar,int i,vector<vector<int>>& dp){
        // if(k==0)
        //     return true;
        // else
        // if(k<0 || j>=nums.size())
        //     return false;
        // if(dp[j][k]!=-1){
        //     return dp[j][k];
        // }
        for(int l=0; l<=nums.size(); l++)
            dp[l][0]=1;
        for(int j=i-1; j>=0; j--){
            for(int k=tar; k>=0; k--){
       
                int inc = 0;

                if (k >= nums[j])
                    inc = dp[j + 1][k - nums[j]];
        int exc=dp[j+1][k];

        dp[j][k]=(inc || exc);
                
            }
        }
        return dp[0][tar];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0,tar;
        for(int num:nums)
            sum+=num;
        if(sum%2)
            return false;
        tar=sum/2;
        vector<vector<int>> dp(nums.size()+1,vector<int>(tar+1,0));
            return mem(nums,tar,nums.size(),dp);
    }
    
};