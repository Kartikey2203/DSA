class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int si=nums.size();
        int tot=(si*(si+1)/2);
        int ans=0;
        for(int i:nums)
            ans+=i;
            return tot-ans;
    }
};