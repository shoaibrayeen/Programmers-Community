/* 
	Find the longest string S which is the prefix of ALL the strings in the array.
*/

import java.util.*;

public class LongestCommonPrefix {

    public static String longestCommonPrefix(ArrayList<String> A) {

        String CommonPrefix = "";
        int N = A.size();

        //minLength - length of shortest length string
        int minLength = Integer.MAX_VALUE;

        for (int i = 0; i < N; i++) {
            minLength = Integer.min(minLength, A.get(i).length());
        }

        //checking upto which length all strings are common
        for (int i = 0; i < minLength; i++) {
            char temp = A.get(0).charAt(i);
            for (int j = 0; j < N; j++) {
                if (A.get(j).charAt(i) != temp) {
                    return CommonPrefix;
                }
            }
            CommonPrefix += temp;
        }

        return CommonPrefix;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter the number of strings : ");
        int N = s.nextInt();

        System.out.print("Enter all the strings : ");
        ArrayList<String> A = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            String str = s.next();
            A.add(str);
        }

        String CommonPrefix = longestCommonPrefix(A);
        System.out.println("Longest Common Prefix : " + CommonPrefix);
    }

}

/* EXAMPLE
   input : Enter the number of strings : 4 
           Enter all the strings : geeksforgeeks geeks geek geezer
   output : Longest Common Prefix : gee
*/
