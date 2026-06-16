class Solution {
public:
    void reve(vector<int> &nums,int s,int e){
        while(s<=e){
            int temp=nums[s];
            nums[s]=nums[e];
            nums[e]=temp;
            s++;
            e--;
        }
        return ;
    }
    void nextPermutation(vector<int>& nums) {
        int piv=-1;
        int n=nums.size();
        for(int i=n-1; i>=1; i--){
            if(nums[i]>nums[i-1]){
                piv=i-1;
                break;
            }
        }
        if(piv==-1){
            reve(nums,0,n-1);
            return ;
        }
        else{
            int j=n-1;
            while(nums[piv]>=nums[j]){
                j--;
            }
            swap(nums[piv],nums[j]);
                reve(nums,piv+1,n-1);

        }
        return ;
    }
};