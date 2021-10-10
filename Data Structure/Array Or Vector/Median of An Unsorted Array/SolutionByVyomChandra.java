import java.util.*;

class SolutionByVyomChandra {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int size = sc.nextInt();
        int[] a = new int[size];
        System.out.print("Enter Elements: ");
        for (int i = 0; i < size; i++)
            a[i] = sc.nextInt();
        System.out.println("Median is " + Median(a));
    }

    public static double Median(int[] arr) {
        Arrays.sort(arr);
        int n = arr.length;
        if (n % 2 != 0)//changed
            return (double) arr[n / 2];
        else
            return (double) (arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
    }
}
