class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int m,int n,int org){
        if(sr<0||sc<0||sr>=m||sc>=n || image[sr][sc]!=org)
         return ;
         image[sr][sc]=color;
         dfs(image,sr+1,sc,color,m,n,org);
         dfs(image,sr-1,sc,color,m,n,org);
         dfs(image,sr,sc+1,color,m,n,org);
         dfs(image,sr,sc-1,color,m,n,org);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        int org=image[sr][sc];
          // Important: avoid infinite recursion
        if (org == color)
            return image;
        dfs(image,sr,sc,color,m,n,org);
        return image;
    }
};