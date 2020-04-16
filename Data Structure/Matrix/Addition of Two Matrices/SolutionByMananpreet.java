import java.util.Scanner;
class AddMatrix
{
	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);
		System.out.println("-- FIRST MATRIX --");
		System.out.print("Number of rows of Matrix 1 : ");
		int p  = s.nextInt();
		System.out.print("Number of columns of Matrix 1 : ");
		int q = s.nextInt();

		int m1[][] = new int[p][q];
        System.out.println("Enter the values");
		for(int i = 0; i < p; i++)
		{
			for(int j = 0; j < q; j++)
			{
				System.out.print("m1["+i+"]["+j+"]: ");
				m1[i][j] = s.nextInt();
			}
		}

		System.out.println("-- SECOND MATRIX --");
		System.out.print("Number of rows of Matrix 2 : ");
		int x  = s.nextInt();
		System.out.print("Number of columns of Matrix 2 : ");
		int y = s.nextInt();

		int m2[][] = new int [x][y];
        System.out.println("Enter the values");
		for(int i = 0; i < x; i++)
		{
			for(int j = 0; j < y; j++)
			{
				System.out.print("m2["+i+"]["+j+"]: ");
				m2[i][j] = s.nextInt();
			}
		}

		if((x!=p) && (y!=q))
			System.out.println("The matrices can't be added");
		else
		{
			int sum[][] =new int [x][y];
			for(int i = 0; i < p; i++)
			{
				for(int j = 0; j < q; j++)
				{
					sum[i][j] = m1[i][j]+m2[i][j];
					System.out.print(sum[i][j]+" ");
				}
				System.out.println();
			}



		}


	}
}
