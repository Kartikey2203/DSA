class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq_table[256]={0};
        for(int i=0; i<s.size(); i++)
        {
            freq_table[s[i]]++;
        }
        for(int i=0; i<t.size(); i++)
        {
            freq_table[t[i]]--;
        }
         for(int i=0; i<256; i++)
         {
            if(freq_table[i]!=0)
            {
                return false;
            }
         }
         return true;
        
    }
};