class Solution {
    public void reverseString(char[] s) {
        int si=s.length;
        int p1=0,p2=si-1;
        for(int i=0; i<si/2; i++){
            char ch=s[p1];
            s[p1]=s[p2];
            s[p2]=ch;
            p1++;
            p2--;
        }
    }
}