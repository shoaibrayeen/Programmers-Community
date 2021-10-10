import java.util.*;

public class SolutionByPranavGurditta {
    public static void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the parenthesis");
        String s = sc.nextLine();
        SolutionByPranavGurditta obj = new SolutionByPranavGurditta();
        System.out.println(obj.checkBalance(s));
    }

    public boolean checkBalance(String s) {
        if (s.length() == 0)
            return true;
        Stack<Character> stack = new Stack<Character>();

        for (int i = 0; i < s.length(); i++) {

            char current_char = s.charAt(i);
            if (!stack.isEmpty()) {
                if (current_char == ')') {
                    if (stack.pop() != '(')
                        return false;
                } else if (current_char == '}') {
                    if (stack.pop() != '{')
                        return false;
                } else if (current_char == ']') {
                    if (stack.pop() != '[')
                        return false;
                } else
                    stack.push(current_char);
            } else
                stack.push(current_char);
        }
        return stack.isEmpty();

    }
}

