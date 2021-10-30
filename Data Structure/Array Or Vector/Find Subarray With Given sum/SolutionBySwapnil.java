import java.util.*;

class Solution { 

    private static boolean isSubarraySum(int[] arr, int n, int sum)
    {

        int prefixSum = 0;
        HashSet<Integer> set  = new HashSet<>();
        set.add(0); //edge case handled
        for(int value : arr) {
            prefixSum += value;
            if(set.contains(sum - prefixSum)) {
                return true;
            }
            else {
                set.add(prefixSum);
            }
        }
        return false;
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of an array:");
        int len = sc.nextInt();
        int[] arr = new int[len];
        System.out.print("Enter the elements of an array:");
        
        for(int i = 0;i < len;i++) {
        arr[i] = sc.nextInt();
        }
        
        System.out.print("Enter the Sum :");
        int sum = sc.nextInt();

        if(isSubarraySum(arr,len,sum))
        System.out.print("Yes");
        else
        System.out.print("No");
    }
}