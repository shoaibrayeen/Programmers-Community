/*
Solution:
Let “count(n)” be the count of ways to place tiles on a “2 x n” grid, we have following two ways to place first tile.
1) If we place first tile vertically, the problem reduces to “count(n-1)”
2) If we place first tile horizontally, we have to place second tile also horizontally. So the problem reduces to “count(n-2)”
Therefore, count(n) can be written as below.
   count(n) = n if n = 1 or n = 2
   count(n) = count(n-1) + count(n-2) 
*/
public class TilePlacement {

    public static void main(String[] args) {
        TilePlacement TP = new TilePlacement();

        for (int i = 1; i <= 10; i++) {
            System.out.print(TP.tilePlacementWays(i) + " ");
        }
        System.out.println();

    }

    public int tilePlacementWays(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        int a = 0;
        int b = 1;
        while (n > 0) {
            int tmp = b;
            b = a + b;
            a = tmp;
            --n;
        }

        return b;
    }
}
