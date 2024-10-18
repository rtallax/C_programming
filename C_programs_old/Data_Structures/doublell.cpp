#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node* next;
};
struct node* head=NULL;

int len;

void Create(void);
void Append(void);
void Addnode(void);
void Display(void);
int Length(void);
void Delete(void);
void Reverse(void);
void Reverse_list(void);
void Swap(void);

int main()
{
	while(1)
	{
		int choice;
		printf("\n");
		printf("1.Create Node:\n");
		printf("2.Append Node:\n");
		printf("3.Add Node in Middle:\n");
		printf("4.Display List:\n");
		printf("5.Length:\n");
		printf("6.Delete Node:\n");
		printf("7.Reverse Data:\n");
		printf("8.Reverse Data with Address:\n");
		printf("9.Swapping:\n");
		printf("10.Exit\n");
		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				Create();
				break;
			case 2:
				Append();
				break;
			case 3:
				Addnode();
				break;
			case 4:
				Display();
				break;
			case 5:
				len=Length();
				printf("Length=%d\n",len);
				break;
			case 6:
				Delete();
				break;
			case 7:
				Reverse();
				break;
			case 8:
			//	Reverse_list();
				break;
			case 9:
			//	Swap();
				break;
			case 10:
				exit(1);
				break;
			default:
				break;
		}
	}
getchar();	
}
 void Create()
 {
 	struct node *temp;
 	temp=(struct node*)malloc(sizeof(struct node));
 	temp->prev=NULL;
 	temp->next=NULL;
 	printf("Enter the DATA to be added\n");
 	scanf("%d",&temp->data);
 	if(head==NULL)
 		head=temp;
 }
 
 void Display()
 {
 	struct node *temp;
 	temp=head;
 	printf("Data	Node			Node->prev			Node->next\n");
 	while(temp!=NULL)
 	{
 		printf("%d\t%p\t%p\t%p\n",temp->data,temp,temp->prev,temp->next);
 		temp=temp->next;
	}
 }
 
 void Append()
 {
 	struct node *temp,*p;
 	temp=(struct node*)malloc(sizeof(struct node));
 	temp->prev=NULL;
 	temp->next=NULL;
 	p=head;
 	printf("Enter the Node Data\n");
 	scanf("%d",&temp->data);
 	if(head==NULL)
 		head=temp;
 	else
 	{
		while(p->next!=NULL)
		{
			p=p->next;	
		}
		temp->prev=p;
		p->next=temp;
	}
 }
 
 int Length()
 {
 	struct node *p;
 	int count=0 ;
 	p=head;
 	if(head==NULL)
 		printf("No Nodes Found\n");
 	else
 	{
 		while(p!=NULL)
 		{
 			p=p->next;
 			count++;
		}
		return count;
	}
 }
 
 void Addnode()
 {
 	int i=0,j,count,pos,len ;
 	struct node *p ,*q,*temp ;
 	temp=(struct node *)malloc(sizeof(struct node));
 	printf("Enter Node Data\n");
 	scanf("%d",&temp->data);
	printf("Enter the Node location to be added\n");
	scanf("%d",&pos);
 	temp->prev=NULL;
 	temp->next=NULL;
 	p=q=head;
 	len=Length();
	if(pos>len)
	{
		printf("Enter a Valid input\n");
	}
 	else 
 	{
 		while(i<pos-1)
 		{
 			p=p->next;
 			i++;
		}
		q=p->next;
		temp->next=p->next;
		temp->prev=p;
		p->next=temp;
		q->prev=temp;	
	}
 }
 
 void Reverse()
 {
 	struct node *prev,*current,*next;
 	prev=NULL;
 	current=head;
 	next=head;
 	while(current->next!=NULL)
 	{
 		next=current->next;
		current->next=prev;
		current->prev=next;
		prev=current;
		current=next; 	
	}
	current->next=prev;
	current->prev=NULL;
	head=current;
}
 void Delete()
 {
 	int len,choice,i=0,j ;
 	struct node *del,*current,*next;
 	current=del=next=head;
	len=Length();
 	printf("Enter the Node no to be deleted\n");
 	scanf("%d",&choice);
 	if(choice > len)
 		printf("Invalid choice\n");
 	else if(choice==1)
 	{
 		if(current->next==NULL)
		{
			head=NULL;
			free(current); 			
		}		
		else
		{
			head=current->next;
			struct node *temp;
			temp=current->next;
			temp->prev=NULL;
			current->next=NULL;
			current->prev=NULL;
			free(current);
		}
	}
	else if(choice==len)
	{
		struct node *temp1;
		temp1=head;
		while(i<choice-1)
 		{
 			current=current->next;
 			i++;
		}
		temp1=current->prev;
		temp1->next=NULL;
		current->prev=NULL;
		current->next=NULL;
		free(current);
	}
	else
	{
		while(i<choice-1)
 		{
 			current=current->next;
 			i++;
		}
		del=current->next;
		next=del->next;
		current->next=del->next;
		next->prev=current;
		current->prev=NULL;
		current->next=NULL;
		free(current);
 	}
 }
