
import java.util.Scanner;

class ListNode {
    int val;
    ListNode next;

    ListNode() {
    }

    ListNode(int val) {
        this.val = val;
    }
}

class SolutionByVikasSangwan {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size: ");
        int n = sc.nextInt();
        ListNode head = new ListNode();
        ListNode itr = head;
        for (int iterator = 0; iterator < n; iterator++) {
            int input = sc.nextInt();
            ListNode node = new ListNode(input);
            itr.next = node;
            itr = node;
        }
        SolutionByVikasSangwan solutionByVikasSangwan = new SolutionByVikasSangwan();
        System.out.println("Is Palindrome =" + solutionByVikasSangwan.isPalindrome(head.next));
    }

    public boolean isPalindrome(ListNode head) {
        ListNode slow = head, fast = head, prev, temp;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        prev = slow;
        slow = slow.next;
        prev.next = null;
        while (slow != null) {
            temp = slow.next;
            slow.next = prev;
            prev = slow;
            slow = temp;
        }
        fast = head;
        slow = prev;
        while (slow != null) {
            if (fast.val != slow.val) return false;
            fast = fast.next;
            slow = slow.next;
        }
        return true;
    }
}
// 12321
