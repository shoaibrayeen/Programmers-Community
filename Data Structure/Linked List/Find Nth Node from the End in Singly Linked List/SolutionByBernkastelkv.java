import java.util.Scanner;

/**
* @author Bernkastelkv (https://github.com/Bernkastelkv)
*/
public class Main {
    
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
        Scanner sc = new Scanner(System.in);
        
        // Initiates linked list based on user input
        Node temp = null;
        Node head = null;
        System.out.println("Enter integer for linked list node (Enter -1 to end list creation): ");
        while (true) {
            int val = sc.nextInt();
            if (val == -1) {
                break;
            }
            else if (temp == null) {
                temp = new Node(val);
                head = temp;
            }
            else {
                temp.next = new Node(val);
                temp = temp.next;
            }
        }
        
        boolean cont = true;
        
        while (cont) {
            // Accept n parameter from the user
            System.out.println("Enter the position of the node from the last you want the value of:");
            
            try {
                int query = sc.nextInt();
                int queryVal = nthFromLast(head, query);
            
                // Format string for query
                String formattedquery;
                switch (query%10) {
                    case 1: 
                        formattedquery = query + "st";
                        break;
                
                    case 2:
                        formattedquery = query + "nd";
                        break;
                    
                    case 3:
                        formattedquery = query + "rd";
                        break;
                
                    default:
                        formattedquery = query + "th";
                }
                System.out.println(formattedquery + " from the last node: " + queryVal);
            } catch (IllegalArgumentException e) {
                System.out.println(e);
            }
            
            // Ask if user wants to continue
            while (true) {
                System.out.println("Continue querying? (y/n)");
                char yn = sc.next().charAt(0);
                if (yn == 'y') {
                    break;
                } else if (yn == 'n') {
                    cont = false;
                    break;
                }
            }
        }
    }
    
    public static void main(String[] args) {
        Main sol = new Main();
        sol.run();
    }
}
