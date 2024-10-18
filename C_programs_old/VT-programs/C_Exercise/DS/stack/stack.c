#include<stdio.h>

int stack[100],top=-1,size,choice=0 ,data;

void push()
{
	printf("Enter the data into stack\n");
	scanf("%d",&data);
	if(top == -1)
	{
		printf("It is the first data\n");
	}
	else if(top == size)
	{
		printf("Stack is overflow\n");
	}
	else
	{
		top=top+1;
		stack[top]=data;
	}
}

void pop()
{
	if(top == -1)
		printf("Underflow\n");
	else
	{
		top=top-1;
	}
}

void Display()
{
	if(top == -1)
		printf("stack is empty\n");
	else
	{
		while(top >= 0)
		{
			printf("%d\t",stack[top]);
			top--;
		}
	}
}

int main()
{
	int choice=0;
	printf("Enter the stack size\n");
	scanf("%d",&size);
	while(choice!=4)
	{
		printf("choose option\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :	push();break;
			case 2 :	pop();break;
			case 3 :	Display();break;
			case 4 :	exit(1);break;
			case 5 :	break;
		}
	}
}
