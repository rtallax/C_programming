#include <stdio.h>
#include <string.h>

//Function to find the minimum length string in the array
int findMinLength(char **strs, int n) {
	int minLen = strlen(strs[0]);
	for (int i = 1; i < n; i++) {
		if (strlen(strs[i]) < minLen) {
			minLen = strlen(strs[i]);
		}
	}
	return minLen;
}

//Function to find the longest common prefix
char* longestCommonPrefix(char **strs, int n) {
	if (n == 0) return "";

//	Find the minimum length string
		int minLen = findMinLength(strs, n);

	static char prefix[100];  // Assumes the prefix won't exceed 100 characters
		int low = 0, high = minLen;

//	Find the common prefix
		for (int i = 0; i < minLen; i++) {
			char current = strs[0][i];

//			Compare the current character with all other strings
				for (int j = 1; j < n; j++) {
					if (strs[j][i] != current) {
						prefix[i] = '\0';
						return prefix;
					}
				}
			prefix[i] = current;
		}
	prefix[minLen] = '\0';
	return prefix;
}

int main() {
//	Example array of strings
		char *strs[] = {"flower", "flow", "flight"};
	int n = sizeof(strs) / sizeof(strs[0]);
	printf("strs:%d, strs[]:%d, length:%d\n",sizeof(strs),sizeof(strs[1]),n);
	char *result = longestCommonPrefix(strs, n);
	if (strlen(result) > 0)
		printf("Longest common prefix: %s\n", result);
	else
		printf("There is no common prefix.\n");

	return 0;
}

