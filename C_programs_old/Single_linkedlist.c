#include<stdio.h>
#include<malloc.h>
#include<string.h>

struct node
{
	int data;
	struct node *link;
};
struct node *root=NULL;

	struct node *node1, *node2, *node3,*node4, *node5;
	
int main()
{
	node1=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&node1->data);
	node2=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&node2->data);
	node3=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&node3->data);
	node4=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&node4->data);
	node5=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&node5->data);
//	root=node1;
//	node1->link=node2;
//	node2->link=node3;
//	node3->link=node4;
//	node4->link=node5;
	
	
//	add();
	print();
	append();
	beginning();	
	getch();
}
void append()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root == NULL)
	{
		root=temp;
	}
	else
	{
		struct node *temp2;
		temp2=root;
		while(temp2->link!=NULL)
		{
			temp2=temp2->link;
		}
		temp2->link=temp;
	}
}
void beginning()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter the first data\n");
	scanf("%d",&temp->data);	
	root=temp;
}
void print()
{
	struct node *var;
	var=root;
	while(var->link!=NULL)
	{
		var=var->link;
		printf("%d\n",var->data);
	}
}


