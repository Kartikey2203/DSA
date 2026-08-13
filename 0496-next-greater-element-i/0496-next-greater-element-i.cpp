class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> ans;
        vector<int> temp;
        unordered_map<int,int> mp;
        stack<int> s;
        int n=nums1.size(),m=nums2.size();
        for(int i=m-1; i>=0; i--){
            while(s.size()> 0 && s.top()<=nums2[i]){
                s.pop();
            }
            if(s.empty()){
                
               mp[nums2[i]]=-1;
            }
            else{
                 mp[nums2[i]]=s.top();
            }
            s.push(nums2[i]);
        }
        for(int i=0; i<nums1.size(); i++){
            temp.push_back(mp[nums1[i]]);
        }
        return temp;
    }
};