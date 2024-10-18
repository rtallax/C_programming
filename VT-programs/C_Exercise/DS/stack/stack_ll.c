#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *link;
};

struct node *head=NULL;
static int len;
 
void push()
{
//	int data;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data into node\n");
	scanf("%d",&temp->data);
//	temp->data=data;
	if(head == NULL)
	{
		head=temp;
	}
	else
	{
		temp->link=head;
		head=temp;
	}	
}

void pop()
{
	struct node *temp;
	temp=head;
	if(head == NULL)
		printf("List is Empty\n");
	else
	{
		head=head->link;
		free(temp);
	}
}

void display()
{
	struct node *temp;
	temp=head;
	if(head == NULL)
		printf("Empty stack\n");
	else
	{	
		printf("Node data list\n");
		while(temp != NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->link;
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("Enter \n1.push\n2.pop\n3.display\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : push(); break; 
			case 2 : pop(); break;
			case 3 : display(); break;
			case 4 : exit(1); break;
			default : break;
		}
	}
	return 0;
}
