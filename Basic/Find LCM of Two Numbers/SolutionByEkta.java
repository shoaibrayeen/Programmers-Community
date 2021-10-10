/*
   program to find LCM of two numbers
*/

import java.util.Scanner;

public class lcm {

    public static int lcm(int P, int Q) {
        int GCD = gcd(P, Q);
        return (P * Q) / GCD;                    // GCD * LCM = P * Q
    }

    //Euclid's division method
    public static int gcd(int p, int q) {
        if (q == 0) {
            return p;
        }
        return gcd(q, p % q);                   //recursion call
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("enter the two numbers");
        int P = s.nextInt();
        int Q = s.nextInt();
        int lcm = (P > Q) ? lcm(P, Q) : lcm(Q, P);         //ternary operator
        System.out.println("LCM of " + P + " & " + Q + " : " + lcm);
        s.close();
    }

}
