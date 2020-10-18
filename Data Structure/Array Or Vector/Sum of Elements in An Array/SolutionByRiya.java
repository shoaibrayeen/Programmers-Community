public class Main {
    static void Sum(int arr[], int n){
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
        }
        System.out.println(sum);
    }
    public static void main(String args[]) {
        int arr[] = {12, 121};
        Sum(arr, 2);
    }
}
