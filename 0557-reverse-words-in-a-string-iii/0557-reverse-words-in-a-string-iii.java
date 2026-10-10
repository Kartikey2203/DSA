class Solution {
    public String reverseWords(String s) {
        String st[]=s.split(" ");
        StringBuilder w=new StringBuilder();
        for(int i=0; i<st.length; i++){
            w.append(new StringBuilder(st[i]).reverse().toString());
            if(i<st.length-1) w.append(" ");
        }
        return w.toString();
    }
}