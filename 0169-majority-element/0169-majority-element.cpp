class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int size=nums.size();
        int count=0,ele=INT_MAX;
       for(int i=0; i<size; i++){
         
            if(nums[i]==ele){
                count ++;
            }
            else
            if(count==0){
                ele=nums[i];
                count++;
            }
            else{
                count--;
            }
         }
       
       return ele;
    }
};