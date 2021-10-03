/* Problem Statement: You are given an array of distinct integers. You have to print all pairs of integers in the array whose XOR value is minimum.

Constraints:
1 <= n <= 10^5
-10^9 <= arr[i] <= 10^9

Sample Input:
4
2
0
5
7

Sample Output:
0, 2
5, 7
*/

import java.io.*;
import java.util.*;

public class Main {
  public static void function(int[] arr) {
    Arrays.sort(arr);
    ArrayList<Integer> ans = new ArrayList<>();
    int min = arr[0] ^ arr[1];
    ans.add(arr[0]);
    ans.add(arr[1]);
    for (int i = 1; i < arr.length - 1; i++) {
      if ((arr[i] ^ arr[i + 1]) < min) {
        min = (arr[i] ^ arr[i + 1]);
        ans = new ArrayList<>();
        ans.add(arr[i]);
        ans.add(arr[i + 1]);
      } else if ((arr[i] ^ arr[i + 1]) == min) {
        ans.add(arr[i]);
        ans.add(arr[i + 1]);
      }
    }

    for (int i = 0 ; i < ans.size() - 1; i += 2) {
      System.out.println(ans.get(i) + ", " + ans.get(i + 1));
    }
  }
  
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int[] arr = new int[n];
    for (int i = 0 ; i < n; i++) {
      arr[i] = scn.nextInt();
    }
    function(arr);
  }
}
