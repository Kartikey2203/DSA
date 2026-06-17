class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& nums) {
        int m=nums.size();
        int n=nums[0].size();
        vector<int> ans;
        int i=0,j=0;
       while (ans.size() < m * n) {
            while(i<=j && j<n && nums[i][j]!=101 ){
                ans.push_back(nums[i][j]);
                nums[i][j]=101;
                j++;
            }
            j--;
            i++;
            while(i<m && nums[i][j]!=101){
                ans.push_back(nums[i][j]);
                nums[i][j]=101;
                i++;
            } 
            i--;
            j--;
            while(j>=0 && nums[i][j]!=101){
                ans.push_back(nums[i][j]);
                nums[i][j]=101;
                j--;
            }
              j++;
              i--;
            while(i>=0 && nums[i][j]!=101){
                ans.push_back(nums[i][j]);
                nums[i][j]=101;
                i--;
            }
           i++;
           j++; 
        }
        return ans;
    }
};