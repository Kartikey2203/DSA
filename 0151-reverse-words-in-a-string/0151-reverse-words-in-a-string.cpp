class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp="";
        for(int i=0; i<s.size(); i++){
            if(s[i] !=' '){
                temp+=s[i];
            }
            else{
                if(temp == "")
                    continue ;
                else
                if(temp !=" ") {
                    st.push(temp);
                    temp="";
                }
            }
        }
            if(temp!="")
              st.push(temp);

        string ans="";
        while(!st.empty()){
             if(st.top() !=" ") {
            ans+=st.top()+" ";
            st.pop();
            // cout<< " 0";
        }
        }
        // return ans.trim();
        return ans.substr(0,ans.size()-1);
    }
};