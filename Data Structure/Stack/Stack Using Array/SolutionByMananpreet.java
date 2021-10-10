import java.util.Scanner;

class StackArray {
    int arr[] = new int[100];
    int top = -1;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StackArray s = new StackArray();
        int op, data;
        System.out.println("1. Push ");
        System.out.println("2. Pop ");
        System.out.println("3. Display ");
        System.out.println("4. Exit ");
        while (true) {
            System.out.print("\nEnter your choice\t:\t");
            op = sc.nextInt();
            if (op == 1) {
                System.out.print("Enter data\t:\t");
                data = sc.nextInt();
                s.push(data);
            } else if (op == 2) {
                s.pop();
            } else if (op == 3) {
                s.print();
            } else if (op == 4) {
                return;
            } else {
                System.out.println("Wrong choice ");
            }

        }
    }

    public void push(int x) {
        if (top == 100) {
            System.out.println("Stack is full");
        } else {
            arr[++top] = x;
        }
    }

    public void pop() {
        if (top == -1) {
            System.out.println("Stack is empty");
        } else {
            System.out.println("Popped Element\t:\t" + arr[top]);
            --top;
        }
    }

    public void print() {
        if (top == -1) {
            System.out.println("Stack is Empty.");
            return;
        }
        System.out.print("Stack: ");
        for (int i = top; i > -1; i--) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
