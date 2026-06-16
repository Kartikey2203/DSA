class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++){
                int k=n-1-i;
                ans[j][k]=matrix[i][j];
            }
        }
        matrix=ans;
        return ;
    }
};