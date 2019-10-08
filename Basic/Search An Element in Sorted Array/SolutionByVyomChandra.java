public class BinarySearch {
        public static void main(String[] args) {
        int arr[] = new int[]{10, 20, 30, 40, 50, 60, 70, 80};
        System.out.println(binarySearch(arr, 10));
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
