import java.util.*;
class SolutionByPranavGurditta {
    public int missingNumber(int[] nums,int size) {
        int xor_of_values=0;
        for(int i:nums)
            xor_of_values=xor_of_values^i;
        for(int i=0;i<=size;i++)
            xor_of_values=xor_of_values^i;
        return xor_of_values;
    }
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        SolutionByPranavGurditta obj=new SolutionByPranavGurditta();
        System.out.println("Enter the size of the array from which you want to find the missing number.");
        int size=sc.nextInt();
        int[] arr=new int[size];
        System.out.println("Enter the elements of the array.");
        for(int i=0;i<size;i++)
            arr[i]=sc.nextInt();
        System.out.println("The missing number is "+obj.missingNumber(arr,size));
    }
}
