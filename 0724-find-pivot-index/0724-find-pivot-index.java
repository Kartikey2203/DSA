class Solution {
    public int pivotIndex(int[] nums) {
        int si=nums.length;
        int left1[]=new int[si-1];
        int tsum=0,left=0,right=0;
        for(int i=0; i<nums.length; i++){
            tsum+=nums[i];
        }
        for(int i=0; i<nums.length; i++){
            right=tsum-left-nums[i];
            if(left==right){
                return i;
            }
            left+=nums[i];
        }
        return -1;
    }
}