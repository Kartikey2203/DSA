class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer> mp=new HashMap<>();
        int max=0;
        int ans=0;
        for(int i:nums){
            mp.put(i,mp.getOrDefault(i,0)+1);
            if(max<mp.get(i)){
            max=mp.get(i);
            ans=i;
            }
        }
        return ans;
    }
}