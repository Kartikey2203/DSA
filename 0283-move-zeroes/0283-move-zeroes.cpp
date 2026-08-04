class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                count++;
            }
            else{
                temp.push_back(nums[i]);
            }
        }
        while(count != 0){
            temp.push_back(0);
            count--;
        }
         nums = temp;
         return ;
    }
};