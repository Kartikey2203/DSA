class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        HashMap<Character,Integer> mp=new HashMap<>();
        for(char ch:magazine.toCharArray()){
            mp.put(ch,mp.getOrDefault(ch,0)+1);
        }
        for(char c:ransomNote.toCharArray()){
            if(!mp.containsKey(c)|| mp.get(c)==0){
                return false;
            }
            mp.put(c,mp.getOrDefault(c,0)-1);
        }
        return true;
    }
}