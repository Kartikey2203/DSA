class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        for(int i=0; i<=e; i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};