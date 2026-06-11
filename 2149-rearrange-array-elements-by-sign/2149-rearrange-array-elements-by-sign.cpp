class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n/2);
        vector<int> right(n/2);
        int j=0,k=0;
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                right[j]=nums[i];
                j++;
            }
            else{
                left[k]=nums[i];
                k++;
            }
        }
         j=0,k=0;
        for(int i=0; i<n; i++){
            if(i%2){
                nums[i]=left[j];
                j++;
            }
            else{
                nums[i]=right[k];
                k++;
            }
        }
        return nums;
    }
};