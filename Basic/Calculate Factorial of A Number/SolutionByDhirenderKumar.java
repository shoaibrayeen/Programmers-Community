/*Program to calculate the factorial of a number taken as an input from user*/

import java.util.Scanner;

class Solution {
    private int num; //The number whose factorial is to be find

    public static void main(String[] args) {
        Solution s1 = new Solution();
        s1.getData();
        long fact = s1.factorial();

        if (fact != -1)
            System.out.println("The factorial is:\t" + fact);
        return;
    }

    public void getData()//Getting inpuet from the user
    {
        System.out.println("Enter the positive number to find the factorial");
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
    }

    public long factorial() {
        long fact = 1;

        if (num < 0)//Checking whether the number is negative and if it is give an error and return -1;
        {
            System.out.println("ERROR!!! Factorial of negative numbers can't be calculated");
            return -1;
        } else if (num == 0 || num == 1)
            fact = 1;

        else {
            for (int i = 2; i <= num; i++) {
                fact *= i;
            }
        }

        return fact;

    }

}
