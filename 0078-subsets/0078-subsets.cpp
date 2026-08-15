class Solution {
public:
void rec(vector<int>& nums,vector<vector<int>>& ans,int ind,vector<int>& temp){
ans.push_back(temp);
 for(int i=ind; i<nums.size(); i++){
    temp.push_back(nums[i]);
    rec(nums,ans,i+1,temp);
    temp.pop_back();
 }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        rec(nums,ans,0,temp);
        return ans;
    }
};