#include <stdio.h>
#include <string.h>

#define MAX 100

//Stack structure for managing brackets
struct Stack {
	char items[MAX];
	int top;
};

//Initialize the stack
void initStack(struct Stack* s) {
	s->top = -1;
}

//Check if stack is empty
int isEmpty(struct Stack* s) {
		printf("In empty\n");
	return s->top == -1;
}

//Push item onto stack
void push(struct Stack* s, char item) {
	if (s->top < MAX - 1) {
		s->items[++s->top] = item;
	}
}

//Pop item from stack
char pop(struct Stack* s) {
	if (!isEmpty(s)) {
		return s->items[s->top--];
	}
	return '\0';
}

//Function to check if two characters are matching brackets
int isMatchingPair(char opening, char closing) {
	return (opening == '(' && closing == ')') ||
		(opening == '{' && closing == '}') ||
		(opening == '[' && closing == ']');
}

//Function to check if brackets are balanced
int isBalanced(const char* expression) {
	struct Stack s;
	initStack(&s);

	for (int i = 0; i < strlen(expression); i++) {
		char current = expression[i];

		//Push opening brackets onto stack
			if (current == '(' || current == '{' || current == '[') {
				push(&s, current);
			} 
		//Check matching for closing brackets
			else if (current == ')' || current == '}' || current == ']') {
				if (isEmpty(&s)) {
					return 0;    //Unmatched closing bracket
				} else {
					char top = pop(&s);
					if (!isMatchingPair(top, current)) {
						return 0;    //Mismatched pair
					}
				}
			}
	}

	//If stack is empty, brackets are balanced
		return isEmpty(&s);
}

int main() {
	const char* expression = "{[()]}";

	if (isBalanced(expression)) {
		printf("The brackets are balanced.\n");
	} else {
		printf("The brackets are NOT balanced.\n");
	}

	return 0;
}

