class Solution {
public:
bool sol_tab(vector<int>& nums,int tar){
    int n=nums.size();
    vector<vector<int>> dp(n+2,vector<int>(tar+2,0));
    for(int i=0; i<=n; i++){
        dp[i][tar]=1;
    }
    int inc=0,ex;
    for(int i=n-1; i>=0; i--){
        for(int j=tar; j>=0; j--){
            inc=0;
            
            if(j+nums[i]<=tar){
                inc=dp[i+1][j+nums[i]];
            }
            ex=dp[i+1][j];
            dp[i][j]=(inc|| ex);
        }
    }
    return dp[0][0];
}
    bool canPartition(vector<int>& nums) {
        int totsum=0,tar;
        for(int i: nums)
        {
            totsum+=i;
        }
        if(totsum%2)
        return false;
        tar=totsum/2;
        return sol_tab(nums,tar);
        
    }
};