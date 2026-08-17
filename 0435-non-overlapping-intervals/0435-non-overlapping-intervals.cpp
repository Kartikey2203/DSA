class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        int index=1;
        sort(nums.begin(),nums.end(),[index](auto& a,auto& b){
            return a[index]<b[index];
        });
        int temp=nums[0][1];
        int count=1;
        if(nums.size()<=1)
            return 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i][0]>=temp){
                temp=nums[i][1];
                count++;
            }
        }
        int ans=nums.size()-count;
        return ans;

    }
};