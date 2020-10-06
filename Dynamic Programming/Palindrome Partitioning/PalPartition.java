public class PalPartition {

	public static int PalindromePartitioning(String str, int si, int ei) {

		if (isPalindrome(str, si, ei)) {
			return 0;
		}

		int min = Integer.MAX_VALUE;

		for (int k = si; k <= ei - 1; k++) {

			int fh = PalindromePartitioning(str, si, k);
			int sh = PalindromePartitioning(str, k + 1, ei);

			int ans = fh + sh + 1;

			if (ans < min) {
				min = ans;
			}

		}

		return min;

	}

	public static boolean isPalindrome(String str, int si, int ei) {

		int left = si;
		int right = ei;

		while (left < right) {

			if (str.charAt(left) != str.charAt(right)) {
				return false;
			}

			left++;
			right--;
		}

		return true;
	}

	