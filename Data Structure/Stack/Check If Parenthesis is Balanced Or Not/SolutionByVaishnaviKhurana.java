/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * @author a
 */

import java.util.*;

public class SolutionByVaishnaviKhurana {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        Stack<Character> stack = new Stack<>();
        boolean Balanced = true;
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (ch == '(' || ch == '{' || ch == '[') {
                stack.push(ch);
                continue;
            }
            if (stack.isEmpty()) {
                Balanced = false;
                break;
            }
            if (ch == ')') {
                if (stack.peek() == '(') {
                    stack.pop();
                } else {
                    Balanced = false;
                    break;
                }
            }
            if (ch == '}') {
                if (stack.peek() == '{') {
                    stack.pop();
                } else {
                    Balanced = false;
                    break;
                }
            }
            if (ch == ']') {
                if (stack.peek() == '[') {
                    stack.pop();
                } else {
                    Balanced = false;
                    break;
                }
            }
        }
        if (!stack.isEmpty())
            Balanced = false;
        if (Balanced) {
            System.out.println("true");
        } else {
            System.out.println(" false");
        }
    }
}
