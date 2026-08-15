// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//      vector<vector<int>> ans;
//      for(int i=0; i<nums.size(); i++){
//      for(int j=i+1; j<nums.size(); j++){
//      for(int k=j+1; k<nums.size(); k++){
//         // if(i!=j && j!=k && k!=i){
//         int temp=nums[i]+nums[j]+nums[k];
//         if(temp==0){
//             vector<int> triplet={nums[i],nums[j],nums[k]};
//             sort(triplet.begin(),triplet.end());
//             if(find(ans.begin(),ans.end(),triplet)== ans.end())
//             ans.push_back(triplet);
//             // cout<<i<<j<<k;
//         }
//         }
//     //  }
//      }
//      }
//        return ans;
//     }
// };
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
    //     //  ans;
    //     sort(nums.begin(), nums.end()); // Step 1: sort
    //     int n = nums.size();
    //     set<vector<int>> un;

    //     for (int i = 0; i < n; i++) {
    //       int tar=-nums[i];
    //       set<int> s;
    //       for(int j=i+1; j<n; j++){
    //       int c=tar-nums[j];
    //       if(s.find(c)!=s.end()){
    //        vector<int> trip={nums[i],nums[j],c};
    //        un.insert(trip);
    //       }
    //       s.insert(nums[j]);
    //     }
    //     }
    //    vector<vector<int>> ans(un.begin(),un.end());
    //     return ans;
    // }
// };
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size(); 
        vector<vector<int>> ans;
            vector<int> temp;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            int j=i+1,k=n-1;
            if(i>0 && nums[i]==nums[i-1]) continue;
            while(j<k){
            int tar=nums[i]+nums[j]+nums[k];
            if(tar<0){
                j++;
            }
            else 
            if(tar>0){
                k--;
            }
            else{
                vector<int> temp={nums[i],nums[j],nums[k]};
                 ans.push_back(temp);
                j++;
                k--;
            while(j<k && nums[j]==nums[j-1]){
                j++;
            }
            }
            }
              
        }
        return ans;
    }
    };