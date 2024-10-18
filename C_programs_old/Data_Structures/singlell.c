#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	int data;
	char *name;
	struct node* link;
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
		printf("size of struture is =%ld\n",sizeof(struct node));
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
				Reverse_list();
				break;
			case 9:
				Swap();
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
//	int data;
	char name[10];
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data value to node\n");
	scanf("%d",&temp->data);
	printf("Enter the name of the node\n");
	scanf("%s",name);
	temp->name=strdup(name);
	temp->link=NULL;
	if(head==NULL)
	{
		head=temp;
	}
}

void Append()
{
//	int data;
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data value to node\n");
	scanf("%d",&temp->data);
//	printf("Enter the name of the node\n");
//	scanf("%s",&temp->name);
	temp->link=NULL;
	p=head;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;	
	}
}

void Addnode()
{
	int i=1,pos,Len;
	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->link=NULL;
	printf("Enter the Data value in Node\n");
	scanf("%d",&temp->data);
	p=head;
	printf("Enter the Position of Node to be added\n");
	scanf("%d",&pos);
	Len=Length();
	if(pos>Len)
	{
		printf("Entered position=%d but available Length=%d\n",pos,Len);
	}
	else
	{
		while(i<pos)
		{
			p=p->link;
			i++;
		}
		temp->link=p->link;
		p->link=temp;
	}
}

int Length()
{
	int count=1;
	struct node *p;
	p=head;
	if(p==NULL)
	{
		printf("No Nodes are available\n");
	}
	while(p->link!=NULL)
	{
		p=p->link;
		count++;
	}
	return count;
}

void Display()
{
	int Len;
	struct node *p;
	p=head;
	if(p==NULL)
		printf("List is Empty\n");
	printf("Node			Name	Data	Node->link\n");
	while(p!=NULL)
	{
		printf("%p\t%s\t%d\t%p\n",p,p->name,p->data,p->link);
		p=p->link;
	}
	printf("\n");
}

void Delete()
{
	int pos,i=1 ;
	struct node *p,*q ;
	printf("Enter the position to be deleted\n");
	scanf("%d",&pos);
	p=head;
	len=Length();
	if(pos>len)
		printf("Invalid Function\n");
	else if(pos==1)
	{
	//	p=head;
		head=p->link;
		p->link=NULL;
		free(p);
	}
	else
	{
		while(i<pos-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
}

/* Reversing the Data of the Node	*/
void Reverse()
{
	int i=0,j,k,len,temp ;
	struct node *p,*q;
	p=q=head;
	len=Length();
	j=len-1;
	while(i<j)
	{
		k=0;
		while(k<j)
		{
			q=q->link;
			k++;
		}
		temp=p->data;
		p->data=q->data;
		q->data=temp;
		p=p->link;
		q=head;
		j--;
		i++;	
	}
}

/* Reversing the Data with Node address	*/
void Reverse_list()
{
	struct node *prev,*current,*next ;
	current=head;
	prev=NULL;
	while(current->link!=NULL)
	{
		next=current->link;
		current->link=prev;
		prev=current;
		current=next;
	}
	current->link=prev;
	head=current;
}

void Swap()
{
	int i=0,j=0,loc_a,loc_b,len,temp ;
	struct node *p,*q;
	printf("Enter the locations to be swapped\n");
	scanf("%d%d",&loc_a,&loc_b);
	len=Length();
	p=q=head;
	if(loc_a > len || loc_b > len)
		printf("Entered locations are not in the length\n");
	else
	{
		while(i<loc_a-1 && j<loc_b-1) 
		{
			p=p->link;
			i++;
		}
		while(j<loc_b-1)
		{
			q=q->link;
			j++;
		}
	}
	temp=p->data;
	p->data=q->data;
	q->data=temp;
}
