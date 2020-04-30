import java.util.Scanner;
import java.util.Arrays;
public class arrayadd {
    public static void main(String[] args){
        int sum = 0;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter number of elements in the array");
        int num = input.nextInt();
        int [] arr = new int [num];
        System.out.println("Enter the elements of array");
        for (int i = 0; i<num; i++){
            arr[i] = input.nextInt();
        }
        for (int number : arr) {
            sum = sum + number;
        }
            System.out.println("The sum of the elements is: " +sum);





    }
}
