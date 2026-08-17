class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp(nums.size(),1);
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if(nums[j]<nums[i]){
                    if(temp[i]<temp[j]+1)
                    temp[i]=temp[j]+1;
                }
            }
        }
        int maxi=0;
        for(int i:temp){
            if(i>maxi){
                maxi=i;
            }
        }
        return maxi;
    }
};