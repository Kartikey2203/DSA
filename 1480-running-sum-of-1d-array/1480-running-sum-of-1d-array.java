class Solution {
    public int[] runningSum(int[] nums) {
        int add=0;
        for(int i=0; i<nums.length; i++){
            add+=nums[i];
            nums[i]=add;
        }
        return nums;
    }
}