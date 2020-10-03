import java.util.Scanner;
public class KthElement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter length of first array");
        int m = sc.nextInt();
        
        System.out.println("Enter length of second array");
        int n = sc.nextInt();
        
        int[] arr1 = new int[m];
        int[] arr2 = new int[n];
        
        for(int i = 0;i < m; i++){
            System.out.println("Enter first array elements");
            int a = sc.nextInt();
            arr1[i] = a;
        }
        
        for(int i = 0;i < n; i++){
            System.out.println("Enter second array elements");
            int a = sc.nextInt();
            arr2[i] = a;
        }
        
        System.out.println("Enter value of k");
        int k = sc.nextInt();
        
        System.out.println(findKthElement(arr1,arr2, k-1));
    }
    
    public static int findKthElement(int[] arr1, int[] arr2, int k){
        if(k > (arr1.length + arr2.length)){
            return -1;
        }
        int i = 0, j = 0;
        while(k > 0 && i < arr1.length && j < arr2.length){
            if(arr1[i] > arr2[j]){
                j++;
            }
            else if(arr1[i] < arr2[j]){
                i++;
            }
            else{
                i++;
                j++;
                k--;
            }
            k--;
        }
        while(k > 0 && i < arr1.length){
            i++;
            k--;
        }
        while(k > 0 && j < arr2.length){
            j++;
            k--;
        }
        if(i == arr1.length){
            return arr2[j];
        }
        if(j == arr2.length) {
            return arr1[i];
        }
        return arr1[i]>arr2[j]?arr2[j]:arr1[i];
    }
}
