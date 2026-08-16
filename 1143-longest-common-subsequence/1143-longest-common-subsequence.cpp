class Solution {
public:
    int ans=0;
    int sol_mem(string& c1,string& c2,int s1,int s2,int x,int y,vector<vector<int>>& dp){
        if(s1==x || s2==y){
            return 0;
        }
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        if(x<s1 && y<s2 && c1[x]==c2[y]){
            ans=1+sol_mem(c1,c2,s1,s2,x+1,y+1,dp);
        }
        else{
            ans=max(sol_mem(c1,c2,s1,s2,x+1,y,dp),sol_mem(c1,c2,s1,s2,x,y+1,dp));
        }
        dp[x][y]=ans;
        return ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        int s1=text1.size(),s2=text2.size();
        vector<vector<int>> dp(s1+1,vector<int>(s2+1,-1));
        return sol_mem(text1,text2,s1,s2,0,0,dp);
    }
};