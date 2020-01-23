import java.util.Scanner;
class StackArray
{
	int arr[] = new int[100];
	int top = -1;


	public void push(int x)
	{
		if(top == 100)
			System.out.println("Stack is full");

		else
			arr[++top] = x;
	}
	public void pop()
	{
		if(top == -1)
			System.out.println("Stack is empty");

		else
			--top;
	}
	// public int top()
	// {
	// 	return arr[top];
	// }
	// public boolean isEmpty()
	// {
	// 	if(top == -1)
	// 		return true;
	// 	return false;
	// }
	public void print()
	{
		System.out.print("Stack: ");
		for(int i = 0; i < top+1; i++)
		{
			System.out.print(arr[i]+" ");
		}
		System.out.println();
	}

	public static void main(String[] args) {
		StackArray s = new StackArray();
		s.push(2);
		s.print();
		s.push(5);
		s.print();
		s.push(3);
		s.print();
		s.pop();
		s.print();
		// System.out.println("Top() "+s.top());
		// System.out.println("isEmpty() "+s.isEmpty());

	}
}
