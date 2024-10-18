#include <stdio.h>

//Function to find the longest common prefix between two numbers
int find_common_prefix(int num1, int num2) {
	int prefix = 0;
	int multiplier = 1;

	//	Iterate while both numbers have digits left to compare
	while (num1 > 0 && num2 > 0) {
		//			Get the last digits of both numbers
		int digit1 = num1 % 10;
		int digit2 = num2 % 10;

		//			If the digits don't match, break
		if (digit1 != digit2) {
	//		break;
		}

		//			Add the matching digit to the prefix
		prefix += digit1 * multiplier;
		multiplier *= 10;

		//			Remove the last digit from both numbers
		num1 /= 10;
		num2 /= 10;
	}

	//	Reverse the prefix since we built it from the last digit first
	int reversed_prefix = 0;
	while (prefix > 0) {
		reversed_prefix = reversed_prefix * 10 + (prefix % 10);
		prefix /= 10;
	}

	return reversed_prefix;
}

//Function to find the longest common prefix among arrays
int find_longest_common_prefix(int arr1[], int n1, int arr2[], int n2) {
	//	Start with the first element of arr1 as the prefix
	int common_prefix = arr1[0];

	//	Compare with the rest of the elements in arr1
	for (int i = 1; i < n1; i++) {
		common_prefix = find_common_prefix(common_prefix, arr1[i]);
		if (common_prefix == 0) {
			return 0;    //No common prefix
		}
	}

	//	Compare with elements in arr2
	for (int i = 0; i < n2; i++) {
		common_prefix = find_common_prefix(common_prefix, arr2[i]);
		if (common_prefix == 0) {
			return 0;    //No common prefix
		}
	}

	return common_prefix;
}

int main() {
	//	Given arrays
	int arr1[] = {1, 10, 100};
	int arr2[] = {1000};

	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	//	Find the longest common prefix
	int common_prefix = find_longest_common_prefix(arr1, n1, arr2, n2);

	//	Print the result
	if (common_prefix > 0)
		printf("The longest common prefix is: %d\n", common_prefix);
	else
		printf("No common prefix found\n");

	return 0;
}

