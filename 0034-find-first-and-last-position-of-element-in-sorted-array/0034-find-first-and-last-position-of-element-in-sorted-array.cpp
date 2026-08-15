class Solution {
public:
int bin(vector<int>& nums,int left,int right,int target, bool l){
    int idx=-1;
        while(left<=right){
        int mid=left+(right-left)/2;
            if(nums[mid]== target){
               idx=mid;
               if(l)
               right=mid-1;
               else
               left=mid+1;
            }     
            else
            if(nums[mid]>target){
                right=mid-1;
            }
            else
                left=mid+1;
        }
        return idx;
}
    vector<int> searchRange(vector<int>& nums, int target) {
         int left=0,right=nums.size()-1;
         vector<int> ans;
         int l=bin(nums,left,right,target,true);
         int r=bin(nums,left,right,target,false);
        return {l,r};
    }
};