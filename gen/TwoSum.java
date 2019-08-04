import java.util.*;
import java.io.*;
import java.math.*;




class Solution {
    public static void main(String[] args) {}
    
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        HashMap<Integer,Integer> map = new HashMap<>();
        HashMap<Integer,Integer> rl = new HashMap<>();
        for(int i = 0; i < n; i += 1) {
            map.put(target-nums[i],nums[i]);
            rl.put(nums[i],i);
        }
        for(int i = 0; i < n; i += 1) {
            if (null != map.get(nums[i])) {
                int k = rl.get(map.get(nums[i]));
                return new int[]{i,k};
            }
        }
        return new int[0];
    }
}
