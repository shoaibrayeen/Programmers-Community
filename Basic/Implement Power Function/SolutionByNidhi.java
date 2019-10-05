import java.util.Scanner;

/**
    Program Description: This program computes the power of a given base value
 */
public class Power {
    private static double computePower(double base, int power){
        if(power == 0){
            return 1;
        }
        // negative power
        else if(power < 0){
            return 1/base * computePower(base, ++power);
        }
        // positive power
        return base * computePower(base, --power);
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Base:\t");
        double base = s.nextDouble();
        System.out.print("Power:\t");
        int power = s.nextInt();
        double baseRaisedToPower = computePower(base, power);
        System.out.print("Base^Power:\t" + baseRaisedToPower);
    }
}

