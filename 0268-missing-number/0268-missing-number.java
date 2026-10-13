class Solution {
    public int missingNumber(int[] nums) {
        int ans=0;
        int tot=0;
        for(int i=0; i<nums.length; i++){
            tot+=nums[i];
        }
        int si=nums.length;
        ans=((si*(si+1))/2)-tot;
        return ans;
    }
}