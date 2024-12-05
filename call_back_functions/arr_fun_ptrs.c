#include <stdio.h>

// Function declarations
int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int main() {
	// Declare an array of function pointers
	int (*operations[2])(int, int) = {add, subtract};

	// Call the functions using the function pointers
	int sum = operations[0](10,5);
	int diff = operations[1](10,5);

	printf("Sum: %d\n", sum);
	printf("Difference: %d\n", diff);

	return 0;
}
