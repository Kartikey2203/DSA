class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        // int ans[];
        int si=0;
        HashMap<Integer,Integer> mp=new HashMap<>();
        ArrayList<Integer> ans=new ArrayList<>();
        for(int i=0; i<nums1.length; i++){
            mp.put(nums1[i],mp.getOrDefault(nums1[i],0)+1);
        }
        for(int i=0; i<nums2.length; i++){
            if(mp.containsKey(nums2[i])){
                if(!ans.contains(nums2[i]))
                ans.add(nums2[i]);
            }
        }
              int[] result = new int[ans.size()];

        for (int i = 0; i < ans.size(); i++) {
            result[i] = ans.get(i);
        }

        return result;
    }
}