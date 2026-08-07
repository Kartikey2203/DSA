class Solution {
public:
    void msort(vector<int>& nums,int left,int mid,int right){
        vector<int> ans;
         if(left > right){
            return ;
        }
        //  int mid =left+(right-left)/2;
         int i=left;
         int j=mid+1;
         while(i<=mid && j<=right){
            if(nums[i]<=nums[j])
                ans.push_back(nums[i++]);
            else
                ans.push_back(nums[j++]);
         }
         while(i<mid+1){
                ans.push_back(nums[i++]);
         }
         while(j<=right){
                ans.push_back(nums[j++]);
         }
        for(int i=left; i<=right; i++){
            nums[i]=ans[i-left];
        }
    }
    void merge(vector<int>& nums,int left,int right){
        if(left >=right){
            return ;
        }
        int mid =left+(right-left)/2;
        merge(nums,left,mid);
        merge(nums,mid+1,right);
        msort(nums,left,mid,right);
    }
    vector<int> sortArray(vector<int>& nums) {
        int s=nums.size();
         merge(nums,0,s-1);
         return nums;
    }
};