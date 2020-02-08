
import java.util.Scanner;

class odd_even
{
   public static boolean isEvenNumber(int num)
   {
      if((num & 1) == 0)
         return true;
      else
         return false;
   }

   public static void main(String[] args)
   {
      Scanner input = new Scanner(System.in);
      int number = input.nextInt();

      if(isEvenNumber(number) == true)
         System.out.print("EVEN");
      else
         System.out.print("ODD");
   }
}
