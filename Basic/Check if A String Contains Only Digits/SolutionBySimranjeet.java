import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * @author LENOVO
 */
public class SolutionBySimranjeet {

    public static int containsDigits(String str) {
        int flag = 0;
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (ch >= 'a' && ch <= 'z') {
                flag = 1;
                break;
            }
        }

        return flag;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        int flag = containsDigits(str);

        if (flag == 0)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
