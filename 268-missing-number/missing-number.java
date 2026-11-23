class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        long su = (long)(n)*(n+1)/2;
        long s = 0;
        for(int i = 0;i<n;i++){
            s = s+nums[i];
        }
        return (int)(su-s);
    }
}