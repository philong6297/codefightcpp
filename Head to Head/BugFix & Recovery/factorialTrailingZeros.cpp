/*
Given an integer n, find the number of trailing zeros in the decimal representation of n! (the exclamation mark means factorial).

Example

For n = 10, the output should be
factorialTrailingZeros(n) = 2.
10! = 3628800, it has 2 trailing zeros.
*/
int factorialTrailingZeros(int n) {
	int result = 0;
	for (int i = 5; i <= n; i += 5) {
		int number = i;
		while (number % 5 == 0) {
			number /= 5;
			result++;
		}
	}
	return result;
}
