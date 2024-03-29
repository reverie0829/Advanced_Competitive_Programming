import java.util.Scanner;
public class leetcode35{
    public static void main(String arg[]){
        int nums[] = {1,3,5,6};
        Solution solution = new Solution();
        int result = solution.searchInsert(nums,5);
        System.out.println(result);
    }
}

class Solution {
    public int searchInsert(int[] nums, int target) {
        int left=0;
        int right=nums.length-1;
        if(nums.length==0){
            return 0;
        }
        while(left<=right){
            int mid=(left+right)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if (target<nums[mid]){
                right=mid-1; 
            }
            else left=mid+1;
        }
        return left;
    }
}
