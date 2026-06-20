class Solution {
public:
    int makebloom(vector<int>& nums, int ind, int k){
       int ans=0;
        int count=0;
        for(int i=0; i<nums.size(); i++){
          if(nums[i]<=ind){
                     count++;
                    if(count==k){
                        ans++;
                        // j++;
                        count=0;
                    }
          }
          else{
                count=0;
          }
        }
         return ans;

    }
    int minDays(vector<int>& nums, int m, int k) {
        if( nums.size() < 1LL*m*k){
            return -1;
        }
        int n=nums.size();
        int ans=0;
        int s=INT_MAX;
        int e=INT_MIN;
        for(int i:nums){
             s=min(s,i);
             e=max(e,i);
        }
        while(s<=e){
            int mid=s+(e-s)/2;
            if(makebloom(nums,mid,k)>=m){
                ans=mid;
                e=mid-1;
            }
            else
           {
            s=mid+1;
           }

        }
        return ans;
        
    }
};