/**
* @author Bernkastelkv (https://github.com/Bernkastelkv)
*/
public class Solution {
    
    public class Node { 
        int val; 
        Node next;
        Node(int val) {this.val = val;}
    }
    /**
     * Returns the integer contained by the nth node from the last node.
     * (Time Complexity: O(n), Space Complexity: O(1). Sliding window approach.)
     *
     * @param head the head Node of a linked list
     * @param n the number of nodes from the last node
     * @return the integer in the Nth node from the last node in the linked list
     */
    public int nthFromLast(Node head, int n) throws IllegalArgumentException { 
        // Guard function : (Error - linked list is empty)
        if (head == null) { 
            throw new IllegalArgumentException("Linked list is empty.");
        }
        // Guard function : (Error - 0 or negative n)
        if (n <= 0) { 
            throw new IllegalArgumentException("n is lesser than 1." 
                + "\"0th Node from the last.\" does not make sense.");
        }

        Node right = head;              // Pointer to Node to iterate through list.

        Node left = head;               // Pointer to iterate through list, n spaces behind right.

        int interval = 1;               // Maintain count of space between right and left
                                        // Note: Start at 1 -> 1st from last is the last node.

        boolean intervalSet = false;    // Determines if left is nth node from right pointer.

        // Guard function for if n == 1
        if (interval == n) {
            intervalSet = true;
        }

        // Move right until the end of the list.
        while (right.next != null) {
            right = right.next;

            // If left is exactly nth from right, move both pointers together.
            if (intervalSet) {
                left = left.next;
            }

            // If left is not far away enough, increment the interval size
            // If interval found, set intervalSet to true.
            if (!intervalSet) {
                interval++;

                if (n == interval) {
                    intervalSet = true;
                }
            }    
        }

        // Guard function : (Error - n is lesser than length of list)
        if (!intervalSet) {
            throw new IllegalArgumentException("n is more than the length of the list.");
        }
        // Return left Node's (nth node from last) value.
        else {
            return left.val;
        }
    }
    
    // Driver Method
    public void run() {
        Node head = new Node(1);
        Node curr1 = new Node(2);
        head.next = curr1;
        Node curr2 = new Node(3);
        curr1.next = curr2;
        
        // Last Node
        System.out.println("1st from the last node: " + nthFromLast(head, 1));
        // Second Last Node
        System.out.println("2nd from the last node: " + nthFromLast(head, 2));
        // Third Last Node
        System.out.println("3rd from the last node: " + nthFromLast(head, 3));
    }
    
    public static void main(String[] args) {
        Solution sol = new Solution();
        sol.run();
    }
}