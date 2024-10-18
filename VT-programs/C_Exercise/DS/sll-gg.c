#include<stdio.h>

struct node {
	int data;
	struct node *next;
};

int push(struct node **head_ref, int data);
{
	struct node *temp;	
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next= (*head_ref);
	(*head_ref) = temp;
}

int delete(struct node **head_ref, int key)
{
	struct node *temp = *head_ref , *prev;
	while(temp!=NULL && temp->data!=key)
	{
		prev = temp;
		temp = temp->next;
	}
	if(temp!=NULL && temp->data == key)
	{
		*head_ref=temp->next;
		free(temp);
	}
	if(temp==NULL)
		return;

	prev->next = temp->next;
	free(temp);
}
int main()
{
	struct node *head = NULL;
	struct node *first = NULL;
	struct node *second = NULL;

	second = (struct node *)malloc(sizeof(struct node));

	push(&head,1);

}
