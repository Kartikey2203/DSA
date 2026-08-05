class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq_table[26]={0};
        if(t.size()!= s.size()){
            return false;
        }
        for(int i=0; i<s.size(); i++)
        {
            freq_table[s[i]-'a']++;
            freq_table[t[i]-'a']--;
        }
        // for(int i=0; i<t.size(); i++)
        // {
        // }
         for(int i=0; i<26; i++)
         {
            if(freq_table[i]!=0)
            {
                return false;
            }
         }
         return true;
        
    }
};