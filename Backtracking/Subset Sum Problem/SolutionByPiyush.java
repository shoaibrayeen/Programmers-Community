import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();

        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = scn.nextInt();
        }

        int target = scn.nextInt();

        printTargetSumSubsets(arr, 0, "", 0, target);
    }

    // set is the subset
    // sos is sum of subset
    // tar is target
    public static void printTargetSumSubsets(int[] arr, int idx, String set, int sos, int tar) {
        if (idx == arr.length) {
            if (sos == tar) { //if we are at end of the branch that is at the last level and our sum of subsets till now is equal to target.
                System.out.println(set + ".");
            }
            return;
        }

        // to avoid redundant case when sum of subsets increase from target.
        if (sos > tar) {
            return;
        }

        // arr[idx] -> yes ||that is it wants to participate in the creation of subset.
        printTargetSumSubsets(arr, idx + 1, set + arr[idx] + ", ", sos + arr[idx], tar);

        // arr[idx] -> no ||that is it does not wants to participate in the creation of subset.
        printTargetSumSubsets(arr, idx + 1, set, sos, tar);
    }

}
