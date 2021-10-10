import java.io.*;

public class Solution_even_odd {

    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int number = Integer.parseInt(br.readLine());

        if ((number & 1) == 1)
            System.out.println("ODD");
        else
            System.out.println("EVEN");


        //Logic
        /*
        e.g. - 5 = 101 in binary representation
               1 = 001 in binary representation
    their (and)& = 001 in binary and equal to 1 in decimal system
        hence if & of a number with 1 gives you 1, then the number is odd.
       
        e.g.2 - 4 = 100   in binary representation
                1 = 001   in binary representation
     their (and)& = 000   in binary and equal to 0 in decimal       
        hence if & of a number with 1 gives you 0, then the number is even.
        */

    }
}
