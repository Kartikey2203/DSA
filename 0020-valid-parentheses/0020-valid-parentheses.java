class Solution {
    public boolean isValid(String s) {
        Stack<Character> st=new Stack<>();
        int si=s.length();
        if(si<2)
            return false;
        for(int i=0; i<si; i++){
            char ch=s.charAt(i);
            if(ch=='('||ch=='['||ch=='{'){
                st.push(ch);
            }
            else
            if(ch==')'||ch==']'||ch=='}'){
              if(st.isEmpty())
                return false;
                char temp=st.pop();
                if((ch==')'&& temp !='(') ||(ch==']' && temp!='[') || (ch=='}'&& temp!='{') ){
                    return false;
                }

            }
        }
              if(st.isEmpty())
        return true;
                return false;
    }
}