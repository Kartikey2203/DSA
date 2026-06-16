class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,cnt=0;
        int i=0;
        if(nums.size()==0)
        return 0;
        while(i<(nums.size()-1)){
            if(nums[i]==(nums[i+1]-1)){
                cnt++;
                ans=max(ans,cnt);
            }
            else
            if(nums[i]==nums[i+1]){
                i++;
                continue;
            }
            else{
                cnt=0;
            }
            i++;
            cout<<nums[i];
        }
        return ans+1;
    }
};