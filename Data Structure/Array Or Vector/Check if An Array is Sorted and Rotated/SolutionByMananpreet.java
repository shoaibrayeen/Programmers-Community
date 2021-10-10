import java.util.Scanner;

class CheckIfSandR {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = s.nextInt();
        }
        boolean ans = false;
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
                ans = true;
                break;
            }
        }
        if (ans)
            System.out.print("The array is sorted and rotated");
        else
            System.out.print("The array is not sorted and rotated");
    }
}
