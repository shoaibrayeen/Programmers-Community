import java.util.*;

class Main {
    // This function stores transpose 
    // of A[][] in B[][] 
    static void transpose(int A[][], int B[][]) {
        int i, j;
        for (i = 0; i < A[0].length; i++)
            for (j = 0; j < A.length; j++)
                B[i][j] = A[j][i];
    }

    // Driver code 
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int N = scn.nextInt();
        int M = scn.nextInt();

        int[][] A = new int[N][M];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                A[i][j] = scn.nextInt();
            }
        }

        int B[][] = new int[M][N], i, j;

        transpose(A, B);

        System.out.print("Result matrix is \n");
        for (i = 0; i < M; i++) {
            for (j = 0; j < N; j++)
                System.out.print(B[i][j] + " ");
            System.out.print("\n");
        }
    }
} 