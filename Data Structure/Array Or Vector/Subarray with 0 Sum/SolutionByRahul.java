import java.util.*;

class ZeroSumSubarrayTrueOrFalse {

    public static Boolean isSubArrayExists(int arr[]) {

        Set<Integer> hs = new HashSet<Integer>();
        int sum = 0;

        // Array Traversal
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];

            if (arr[i] == 0 || sum == 0 || hs.contains(sum)) {
                return true;
            }
            hs.add(sum);
        }
        return false;
    }

    public static void main(String arg[]) {

        System.out.println("Enter the size of the Array");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m;

        int[] arr = new int[n];

        System.out.println("Enter the values of the Array");
        for (int i = 0; i < n; i++) {
            m = sc.nextInt();
            arr[i] = m;
        }

        if (isSubArrayExists(arr))
            System.out.println("true");
        else
            System.out.println("false");
    }
} 
