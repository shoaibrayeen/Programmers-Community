import java.io.*;
import java.util.*;
/*
1. You are given a string str.Print All the permutation of String.
2.Sample Input
  abc
3.Sample Output
  abc
  acb
  bac
  bca
  cab
  cba
*/

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        String str = scn.next();
        printPermutations(str, "");

    }

    public static void printPermutations(String ques, String asf) {
        if (ques.length() == 0) {
            System.out.println(asf);
            return;
        }

        for (int i = 0; i < ques.length(); i++) {
            char ch = ques.charAt(i);
            String qlpart = ques.substring(0, i);
            String qrpart = ques.substring(i + 1);
            String roq = qlpart + qrpart;
            printPermutations(roq, asf + ch);
        }

    }

}
