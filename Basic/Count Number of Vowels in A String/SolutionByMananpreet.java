import java.util.Scanner;

class CheckVowels {
    public static int countVowels(String str) {
        String s = str.toLowerCase();
        int count = 0;

        for (int i = 0; i < str.length(); i++) {
            if (s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o' || s.charAt(i) == 'u')
                count++;
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter a string :");

        String str = s.next();

        System.out.print("Number of vowels in the entered string are :" + countVowels(str));
    }
}
