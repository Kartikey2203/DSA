class Solution {
    public void moveZeroes(int[] nums) {
        int x[]=new int[nums.length];
        int a=0;
        for(int i=0; i<nums.length; i++){
            if(nums[i]!=0){
                x[a]=nums[i];
                a++;
            }
        }
        for(int i=0; i<nums.length; i++){
            if(nums[i]==0){
                x[a]=nums[i];
                a++;
            }
        }
          // Copy the result back to the original array
        for (int i = 0; i < nums.length; i++) {
            nums[i] = x[i];
        }
    }
}