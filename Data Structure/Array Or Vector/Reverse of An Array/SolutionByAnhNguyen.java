import java.util.Scanner;

/**
 * Given a array, reverse it.
 */
public class SolutionByAnhNguyen {

  public static void main(String[] agrs) {
    // Read inputs
    Scanner sc = new Scanner(System.in);
    System.out.println("Please enter the size of the array: ");
    int size = sc.nextInt();
    int[] arr = new int[size];
    System.out.println("Please enter the elements in the array: ");
    for (int i = 0; i < size; i++) {
      arr[i] = sc.nextInt();
    }

    // Print out the array in reverse order
    System.out.println("The array in the reverse order: ");
    for (int i = size - 1; i > -1; i--) {
      System.out.println(arr[i]);
    }
  }
}
