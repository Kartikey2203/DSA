class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(auto st:strs){
            string s=st;
            sort(s.begin(),s.end());
            mp[s].push_back(st);
        }
        vector<vector<string>> ans;
        for(auto &i:mp){
            ans.push_back({i.second});
        }
return ans;
    }
};