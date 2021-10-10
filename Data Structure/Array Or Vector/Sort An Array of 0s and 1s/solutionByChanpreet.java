import java.util.Scanner;

public class SortArrayOf1sAnd0s {

    public static void main(String[] args) {
        int i = -1, temp;            //i is used to keep a track of index of last '0' encountered

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[n];
        sc.close();            //input ends

        for (int j = 0; j < a.length; j++) {

            if (a[j] == 0) {
                i++;

                //swap the elements
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        display(a);
    }


    private static void display(int[] a) {
        for (int j : a) {
            System.out.print(j + " ");
        }
    }

}
