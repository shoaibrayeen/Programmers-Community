import java.util.*;
public class SolutionByHarpreetSingh{
 // 946. Validate Stack Sequences
 public static Scanner scn = new Scanner(System.in);
 public static boolean validateStackSequences(int[] pushed, int[] popped) {
    LinkedList<Integer> st = new LinkedList<>();
    int idx=0;
    for(int ele:pushed){
        st.addFirst(ele);
        while(st.size()!=0 && st.getFirst() == popped[idx]){
            idx++;
            st.removeFirst();
        }
    }
    return idx==popped.length;      //st.size()==0
}
public static void main(String[] args){
    // pushed = [1,2,3,4,5], popped = [4,5,3,2,1]    =>  true
    // pushed = [1,2,3,4,5], popped = [4,3,5,1,2]    => false
    System.out.print("Enter the size of the arrays: ");
    int n = scn.nextInt();
    int[] pushed = new int[n];
    int[] popped = new int[n];
    System.out.println("Enter the elements of pushed array");
    for(int i=0;i<n;i++)
    pushed[i] = scn.nextInt();
    
    System.out.println("Enter the elements of popped array");
    for(int i=0;i<n;i++)
    popped[i] = scn.nextInt();
    System.out.println(validateStackSequences(pushed, popped));
}
}