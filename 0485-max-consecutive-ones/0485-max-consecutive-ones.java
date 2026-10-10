class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int si=nums.length;
        int maxi=0;
        int tem=0;
        for(int i=0; i<si; i++){
            while(i<si && nums[i]==1 ){
                tem++;
                i++;
            }
            maxi=Math.max(maxi,tem);
            tem=0;
        }
        return maxi;
    }
}