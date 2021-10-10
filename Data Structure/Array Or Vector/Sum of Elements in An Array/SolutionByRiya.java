public class Main {
    static void Sum(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];
        }
        System.out.println(sum);
    }

    public static void main(String args[]) {
        Main obj = new Main();
        System.out.println("Enter the size of the Array");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the values of the Array");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        obj.Sum(arr, n);
    }
}
