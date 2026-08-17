class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
       for(int j=0; j<=n; j++){
        ans[j]=ans[j>>1]+(1 & j);
        }
        // ans.push_back(count);
       
       return ans;
    }
};