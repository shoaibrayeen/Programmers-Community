import java.util.Scanner;

class PrintSpiralMatrix {
    public static void printSpiral(int arr[][], int m, int n) {
        //m = number of rows
        //n = number pf columns
        //T = Top, B = Bottom, L = Left, R = Right, dir = direction
        int T = 0;
        int B = m - 1;
        int L = 0;
        int R = n - 1;
        int dir = 0;

        while (T <= B && L <= R) {
            if (dir == 0) {
                for (int i = L; i <= R; i++) {
                    System.out.print(arr[T][i] + " ");

                }
                T++;
            }
            if (dir == 1) {
                for (int i = T; i <= B; i++) {
                    System.out.print(arr[i][R] + " ");

                }
                R--;
            }
            if (dir == 2) {
                for (int i = R; i >= L; i--) {
                    System.out.print(arr[B][i] + " ");

                }
                B--;
            }
            if (dir == 3) {
                for (int i = B; i >= T; i--) {
                    System.out.print(arr[i][L] + " ");


                }
                L++;

            }

            dir = (dir + 1) % 4;

        }
    }

    public static void main(String[] args) {
        //	int arr[][] = {{1,2,3,4},{12,13,14,5},{11,16,15,6},{10,9,8,7}};
        Scanner s = new Scanner(System.in);
        System.out.print("Enter num of rows : ");
        int r = s.nextInt();
        System.out.print("Enter num of columns : ");
        int c = s.nextInt();

        int arr[][] = new int[r][c];
        System.out.println("Enter the values of the 2D array");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                System.out.print("arr[" + i + "][" + j + "]: ");
                arr[i][j] = s.nextInt();
            }
        }

        printSpiral(arr, r, c);

    }

}
