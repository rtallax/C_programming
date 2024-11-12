#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int count=1;
/* List defination */
struct node {
	int data;
	struct node *next;
};

struct node *create_node(int data)
{
	struct node *temp = NULL;
	temp = (struct node *)malloc(sizeof(struct node ));
	temp->data = data;
	temp->next = NULL;
	return temp;
}
struct node *Add_at_begining(struct node **head, int data)
{
	struct node *Newnode = create_node(data);
	struct node *temp = *head;
	if(temp == NULL) {
		temp = Newnode;
	}
	Newnode->next = temp;
	temp=Newnode:

//	Newnode->next = *head;
//	*head = Newnode;
}

struct node *Add_at_end(struct node **head, int data)
{
	struct node *Newnode = create_node(data);
	Newnode->next = NULL;
	struct node *temp = *head;
	while(temp->next!= NULL) {
		printf("%d\n",count++);
		temp=temp->next;
	}
	temp->next = Newnode;
}

void print_list(struct node *head)
{
	struct node *temp = head;
	while(temp!= NULL)
	{
		printf("node Addr:0x%x, data:%d, node->next:0x%x\n",temp,temp->data,temp->next);
		temp = temp->next;
	}
}
/*
void assending_order(struct node *head)
{
	struct node *temp = head;
	struct node *x = NULL;
	while((temp->next)!=NULL)
	{
		if(temp->data > temp->next->data)
		{
			temp->next
		}	
	}
}
*/
int main()
{
	struct node *head = NULL;
	Add_at_begining(&head,1);
	Add_at_begining(&head,2);
	Add_at_begining(&head,4);
	Add_at_begining(&head,3);
	Add_at_end(&head,5);
	printf("\n\n\n");
	Add_at_end(&head,6);
	print_list(head);
	return 0;
}
