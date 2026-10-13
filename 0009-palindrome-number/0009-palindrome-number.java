class Solution {
    public boolean isPalindrome(int x) {
        String s=Integer.toString(x);
        int le=s.length();
        for(int i=0; i<le; i++){
            if(s.charAt(i)!=s.charAt(le-i-1))
            return false;
        }
        return true;
    }
}