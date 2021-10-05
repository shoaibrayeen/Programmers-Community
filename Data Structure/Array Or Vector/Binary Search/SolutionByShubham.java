//Find position of an element in a sorted array of infinite numbers.


public class SolutionByShubham {
    
    public static void main(String[] args) {
        int[] arr = {2, 3, 5, 6, 7, 8, 10, 11, 12, 15, 20, 23, 30};
        int target = 15;
        System.out.println(findAns(arr, target));
    }
    static int findAns(int[] arr, int target)
    {
        int start = 0;
        int end = 1;
        while(target > arr[end])
        {
            int newStart = end + 1;
            end = end + (end - start) * 2;
            start = newStart;
        }
        return binarySearch(arr, target, start, end);
    }
    static int binarySearch(int[] arr, int target, int start, int end)
    {
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(target > arr[mid])
            {
                start = mid + 1;
            }
            else if(target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
}
