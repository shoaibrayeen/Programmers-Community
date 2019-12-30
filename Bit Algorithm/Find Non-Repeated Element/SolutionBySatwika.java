import java.io.*;
import java.util.*;

public class uniqueElement {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int size = s.nextInt();
		int arr[] = new int[size];
		int i = 0, uniq = 0;
		for (i = 0; i < size; i++) {
			arr[i] = s.nextInt();
			uniq = uniq ^ arr[i];
		}
		System.out.println(uniq);
	}

}
