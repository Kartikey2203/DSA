class Solution {
    public boolean isPalindrome(String s) {
        s=s.toLowerCase();
        String tem="";
        for(int i=0; i<s.length(); i++){
            if((s.charAt(i)>='a' && s.charAt(i)<='z')||(s.charAt(i)>='0' && s.charAt(i)<='9')){
                tem=tem+s.charAt(i);
            }
        }
        int p1=0;
        int p2=tem.length()-1;
        for(int i=0; i<=p2; i++){
            if(tem.charAt(p1)!=tem.charAt(p2)){
                return false;
            }
            p1++;
            p2--;
        }
    return true;
    }
}