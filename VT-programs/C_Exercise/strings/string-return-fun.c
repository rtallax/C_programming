#include <stdio.h>

const char* myName() {
	char *name = "INTEL";
	return name;
}

int main(void) {
	char *str;
	str = myName();
	printf("%s\n", str);
}
