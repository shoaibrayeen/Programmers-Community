import java.util.*;

public class Solution {
    /*
    *Test Cases:
    trapingRainWater({9,9,9,9,9}) = 0  //when all elements are equal
    trapingRainWater({1,2,10,9,7}) = 0 // monotonic array condition
    */
    public static int trappingRainWater(int[] height) {
        int len = height.length;
        if (len < 3) // base condition
            return 0;
        int left = 0, maxLeft = left, maxRight = left, result = left, right = len - 1;
        while (left <= right) {
            if (height[left] == maxLeft && maxRight == height[right]) { // edge case when all elements are equal
                left++;
                right--;
            } else if (height[left] < height[right]) {
                maxLeft = Math.max(maxLeft, height[left]);
                result += maxLeft - height[left++];
            } else {
                maxRight = Math.max(maxRight, height[right]);
                result += maxRight - height[right--];
            }
        }
        return result;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(trappingRainWater(arr));

    }

}
