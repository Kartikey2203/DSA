class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string temp="";
        int left=0,maxlen=0;
        unordered_map<char,int> mp;
    for(int right=0; right<s.size(); right++){
        if(mp.find(s[right])!=mp.end()){
            left=max(left,mp[s[right]]+1 );
            // temp+=s[right];
        }
        mp[s[right]]=right;
        maxlen=max(maxlen,right-left+1);
    }
    return maxlen;
    }
};