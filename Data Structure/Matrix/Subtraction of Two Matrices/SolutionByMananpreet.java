import java.util.Scanner;

class SubMatrix {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        System.out.println("-- FIRST MATRIX --");
        System.out.print("Number of rows of Matrix 1 : ");
        int p = s.nextInt();
        System.out.print("Number of columns of Matrix 1 : ");
        int q = s.nextInt();

        int m1[][] = new int[p][q];
        System.out.println("Enter the values");
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                System.out.print("m1[" + i + "][" + j + "]: ");
                m1[i][j] = s.nextInt();
            }
        }

        System.out.println("-- SECOND MATRIX --");
        System.out.print("Number of rows of Matrix 2 : ");
        int x = s.nextInt();
        System.out.print("Number of columns of Matrix 2 : ");
        int y = s.nextInt();

        int m2[][] = new int[x][y];
        System.out.println("Enter the values");
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                System.out.print("m2[" + i + "][" + j + "]: ");
                m2[i][j] = s.nextInt();
            }
        }

        if ((p != x && q != y) || p == 0 || q == 0 || x == 0 || y == 0)
            System.out.println("Subtraction not possible for this input.");
        else {
            int sub[][] = new int[p][q];
            for (int i = 0; i < p; i++) {
                for (int j = 0; j < q; j++) {


                    sub[i][j] = m1[i][j] - m2[i][j];
                    System.out.print(sub[i][j] + " ");

                }

                System.out.println();
            }

        }


    }
}
