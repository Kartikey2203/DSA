class Solution {
public:

    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         int n=nums.size();
        vector<int> temp(n,1);
        vector<int> prev(n,-1);
        int ind=0,maxi=1;
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(nums[i]%nums[j]==0){
                    if(temp[i]<temp[j]+1){
                        temp[i]=temp[j]+1;
                        prev[i]=j;
                        if(maxi<temp[i]){
                        maxi=temp[i];
                        ind=i;
                        }
                    }
                }
            }
        }
        vector<int> ans;
        while(prev[ind]!=-1){
            ans.push_back(nums[ind]);
            ind=prev[ind];
        }
            ans.push_back(nums[ind]);
    return ans;
    }
};