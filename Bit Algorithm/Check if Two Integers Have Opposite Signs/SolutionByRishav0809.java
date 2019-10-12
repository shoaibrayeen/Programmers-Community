import java.io.*;
class program
{ 
    public static void main(String args[])throws IOException
    {
        InputStreamReader in=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(in);
        System.out.println("Enter numbers");
        int max,min;
        int n1=Integer.parseInt(br.readLine());
        int n2=Integer.parseInt(br.readLine());
        if(n1>n2)
        {
             max=n1;
             min=n2;
        }
        else
        {
            max=n2;
            min=n1;
        }
        if(min<0 && max>0)
            System.out.println("No");
        else 
            System.out.println("Yes");
    }
}