import java.util.Scanner;

class CheckCharacter {
    public static String check(String s) {
        String c = s.toLowerCase();

        if (c.charAt(0) == 'a' || c.charAt(0) == 'o' || c.charAt(0) == 'i' || c.charAt(0) == 'o' || c.charAt(0) == 'u')
            return "Vowel";

        return "Consonant";
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a character :");
        String s = scan.next();
        System.out.println(check(s));


    }
}
