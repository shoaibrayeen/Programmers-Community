import java.util.*;
public class SolutionByVyomChandra {
        public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter size: ");
        int size=sc.nextInt();
        System.out.print("Enter element: ");
        int a[]=new int[size];
        for(int i=0;i<size;i++) 
                a[i]=sc.nextInt();
        Arrays.sort(a);
        System.out.print("Enter key: ");
        int n=sc.nextInt();
        System.out.println(binarySearch(arr, n));
    }
 private static boolean binarySearch(int arr[], int dataToSearch){
        if(arr==null || arr.length<0){
            return false;
        }
        int start = 0;
        int end = arr.length-1; 
        while(start <= end){
            int mid = start + (end-start)/2;  
            if(dataToSearch == arr[mid]){
                return true;     
            }else if(dataToSearch < arr[mid]){ 
                end = mid-1;
            }else{ 
                start = mid+1;
            }
        }
        return false;
    }
}
