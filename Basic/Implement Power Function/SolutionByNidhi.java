import java.util.Scanner;

/**
    Program Description: This program computes the power of a given base value
 */
public class Power {
    private static long computePower(int base, int power){
        if(power == 0){
            return 1;
        }
        return base * computePower(base, --power);
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Base:\t");
        int base = s.nextInt();
        System.out.print("Power:\t");
        int power = s.nextInt();
        long baseRaisedToPower = computePower(base, power);
        System.out.print("Base^Power:\t" + baseRaisedToPower);
    }
}
