import java.util.Scanner;
class SolutionByVyomChandra{
  public static void main(String[] args)
  {
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a number (should be greater then or equal to 2) : ");
    int n=sc.nextInt();
    if(n<2)
    {
      System.out.println("Number should be greater or equal to 2");
    }
    else{
      boolean check=true;
      for(int i=2;i<n;i++)
      {
         if(n%i==0){
          check=false;
          break;
         }
      }
      if(check)
        System.out.println("YES");
      else
        System.out.println("No");
    }
  }
}
