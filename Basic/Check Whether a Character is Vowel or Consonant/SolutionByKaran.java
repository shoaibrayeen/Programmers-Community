import java.io.*;
import java.util.*;

class abc {
    static void vowel_consonant(char c) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' ||
                c == 'o' || c == 'i' || c == 'u') {
            System.out.println("Vowel");
        } else {
            System.out.println("Consonant");
        }
    }

    public static void main(String[] args) throws java.lang.Exception {
        char b;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any character: ");
        b = sc.next().charAt(0);
        vowel_consonant(b);
    }
}
