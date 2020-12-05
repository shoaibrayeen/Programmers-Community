import java.util.Scanner;

public class Main {
    public void fac(long n){
        int fact = 1;
        while(n>1){
            fact *= n;
            n--;
        }
        return fact;
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        System.out.println(""+ fac(n));
        sc.close();
    }
}
