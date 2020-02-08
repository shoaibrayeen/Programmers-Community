import java.util.Scanner;
class SolutionByVyomChandra{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a number : ");
    long l=sc.nextLong();
    int count=0;
    if( l == 0 ) {
        count = 1;
    }
    while(l>0){
      count++;
      l=l/10; 
    }
    System.out.print(count);
  }
}
