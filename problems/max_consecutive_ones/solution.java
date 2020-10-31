class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int l = 0, ans = 0;
        for(int i = 0;i<nums.length;i++){
            if(nums[i]==0){
                if(i!=l) ans = Math.max(ans,i-l);;
                l = i+1;
            }
        }
        return Math.max(ans,nums.length-l);
    }
}