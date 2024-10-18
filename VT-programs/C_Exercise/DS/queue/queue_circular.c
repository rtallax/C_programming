#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data ;
	struct node *link ;
};

struct node *front= NULL;
struct node *rear= NULL;



void enqueue()
{
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&temp->data);
	if(front == NULL)
	{
		front=temp;
		rear=temp;
		rear->link = front;
		front->link = NULL;
	}
	else
	{
		rear->link =temp;
		rear = temp;
		rear->link = front;
	}
}

void dequeue()
{
	struct node *temp;
	if(front == NULL)
	{
		printf("No Nodes available\n");
	}
	else
	{
		temp = front;
		front = temp->link;
		free(temp);
	}
	rear->link=front;
}

void display()
{
	struct node *temp;
	temp=front;
	printf("Node->address   Node->data   Node->link\n");
	do
	{
		printf("%p\t%d\t     %p\n",temp,temp->data,temp->link);
		temp=temp->link;
	}	
	while(temp!=front);
//	{
//		printf("%p\t%d\t     %p\n",temp,temp->data,temp->link);
//		temp=temp->link;
//	}
}

int main()
{
	int ch ;
	while(1)
	{
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : enqueue();break;
			case 2 : dequeue();break;
			case 3 : display();break;
			case 4 : exit(1);break;
			default : break;
		}
	}
	return 0;
}
