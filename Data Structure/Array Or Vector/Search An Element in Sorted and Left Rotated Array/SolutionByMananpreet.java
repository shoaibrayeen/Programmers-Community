import java.util.Scanner;

class SearchFromSortedAndRotated {
    public static String search(int a[], int x) {
        for (int i = 0; i < a.length; i++) {
            if (x == a[i])
                return "Yes";
        }
        return "No";
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter the length of the array: ");
        int n = s.nextInt();

        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = s.nextInt();
        }

        System.out.print("Enter x");
        int x = s.nextInt();

        System.out.print(search(arr, x));
    }
}
