#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max 50
struct bracket {
	int top;
	char item[Max];
};

void push(struct bracket *s, char ch) {
	if(s->top < Max-1) {
		s->item[++(s->top)] = ch;
	}
}	

void init(struct bracket *s) {
	s->top = -1;
}
int empty(struct bracket *s) {
	return s->top == -1;
}
char pop(struct bracket *s) {
	if(!empty(s)) {
		return s->item[s->top--];
	}
}

int match(char open, char close) {
	return ( open == '{' && close == '}' ||
			open == '[' && close == ']' ||
			open == '(' && close == ')');
}

int main()
{
	struct bracket s;
	char *str= "{[()]}";
	int len = strlen(str);
	int i=0;
	char current;
	init(&s);
	while(i<len) {
		current = str[i];
		if(current == '{'|| current == '[' || current == '(') {
			push(&s,current);
		} else if (current == '}'|| current == ']' || current == ')') {
			char item = pop(&s);
			if(!match(item,current)) {
				printf("Not Matched\n");
				return 0;
			}
		}
		i++;
	}
	printf("Matched\n");
			
}
