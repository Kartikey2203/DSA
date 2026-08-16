class Solution {
public:
    // void mem(vector<int>& nums,int t,unordered_map<int,int>& dp,int i){
    //     if(t<=0 ||i>=nums.size())
    //    return  ;
    //     // count++; 
        
    //     mem(nums,t-nums[i],dp[t-nums[i]]++,i+1);
    //     mem(nums,t+nums[i],dp[t+nums[i]]++,i+1);
    // return ;
    // }
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<int,int> dp;
        dp[0]=1;
        for(auto i:nums){
            unordered_map<int,int> next;
            for(auto it:dp){
                int num=it.first;
                int ways=it.second;
                next[num-i]+=ways;
                next[i+num]+=ways;
            }
            dp=next;
        }
        // mem(nums,target,dp,0);
        return dp[target];

    }
};