class Solution {
public:
        int ans=0;
    int mem(string& w1,string& w2,int x,int y,vector<vector<int>>& dp){
        int s1=w1.size(),s2=w2.size();
        if(x==s1){
            return s2-y;
        }
        if(y==s2)
            return s1-x;

        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        if(w1[x]==w2[y])
            ans=mem(w1,w2,x+1,y+1,dp);
        else
        {
            ans=1+min(mem(w1,w2,x+1,y+1,dp),min(mem(w1,w2,x+1,y,dp),mem(w1,w2,x,y+1,dp)));
        }
        dp[x][y]=ans;
        return ans;
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size(),vector<int>(word2.size(),-1));
      return mem(word1,word2,0,0,dp);
    }
};