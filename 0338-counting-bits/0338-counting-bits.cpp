class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
       for(int j=0; j<=n; j++){
         int count=0;
         int i=j;
        while(i>=1){
            // if(dp[i]==i){
            //     ans.push_back()
            // }
            if(i%2==1)
            count++;
            i=i>>1;
            // cout<<i;
        }
        ans.push_back(count);
       } 
       return ans;
    }
};