class Solution {
    int binarysearch(int[] nums,int target,boolean flag){
        int low = 0;
        int high = nums.length-1;
        int  i = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]<target){
                low = mid+1;
            }else if(nums[mid]>target){
                high = mid-1;
            }else{
                i = mid;
                if(flag){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        return i;
    }
    public int[] searchRange(int[] nums, int target) {
        int left = binarysearch(nums,target,false);
        int right = binarysearch(nums,target,true);
        return new int[]{left,right};
    }
}
