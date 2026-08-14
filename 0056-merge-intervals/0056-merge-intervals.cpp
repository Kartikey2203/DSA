class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &val)
    {
        vector<vector<int>> ans;
        sort(val.begin(), val.end());
        int m = val.size();
        int n = val[0].size();
        int x=val[0][0];
        int y=val[0][1];
        for (int i = 1; i < m; i++)
        {
          
                if (y >= val[i][0] )
                {
                    // int x = min(val[i][0], val[i + 1][0]);
                     y = max(val[i][1], y);
                   
                    
                }
                else
                {
                     ans.push_back({x, y});
                     x=val[i][0];
                     y=val[i][1];
                }
            
           
        }
          ans.push_back({x, y});

        return ans;
    }
};