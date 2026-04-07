class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int> temp(nums.size(),1);
        vector<int> sub(nums.size(),1);
        int subset=1;
        int maxi=1;
         for(int i=0; i<nums.size(); i++){
            subset=1;
            for(int j=0; j<i; j++){
                  if(nums[i]>nums[j]){
                    if(temp[i]< temp[j]+1){
                        temp[i]=temp[j]+1;
                        sub[i]=sub[j];
                    }
                    else
                     if(temp[i]==temp[j]+1){
                     sub[i]+=sub[j];
                     }
                  }
                
            }
                     maxi=max(temp[i],maxi);
         }
      int ans=0;
      for(int i=0; i<nums.size(); i++){
        if(maxi==temp[i]){
            ans+=sub[i];
        }
      }
      return ans;
    }
};