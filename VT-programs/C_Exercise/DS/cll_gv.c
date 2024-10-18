#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node *head=NULL;
static int len;
int append()
{
	int num,i;
	struct node *p;
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter the node details\n");
	scanf("%d",&temp->data);
	temp->link=head;
	p=head;
	if(head==NULL)
	{
		temp->link=temp;
		head=temp;
	}
	else
	{
		while(p->link!=head)
		{
			p=p->link;
		}
		temp->link=head;
		p->link=temp;
	}
	return 0;
}

void display()
{
	struct node *temp;
	temp=head;
	printf("NODE addr	DATA	NEXT-NODE-arrd\n");
	while(temp!=head)
	{
		printf("%p\t%d\t%p\n",temp,temp->data,temp->link);
		temp=temp->link;
	}	
	printf("\n");
}
int length()
{
	struct node *temp;
	temp=head;
	while(temp!=head)
	{
		temp=temp->link;
		len++;
	}
	return len;
}

void delete()
{
	int num,i;
	struct node *temp,*prev;
	temp=head;
	prev=head;
	printf("Enter the node number to be deleted\n");
	scanf("%d",&num);
	if(num > len )
		printf("Enter the proper node number\n");
	if(num == 1)
	{
		head=temp->link;
		free(temp);	
	}
	else
	{
		for(i=1;i<num;i++)
		{
			prev=temp;
			temp=temp->link;
		}
		prev->link=temp->link;
		free(temp);
	}
}

int main()
{
	int count=0;

	while(1)
	{
		int opt;
		printf("Enter the options:\n1.append\n2.display\n3.length\n4.delete\n10.exit\n");
		scanf("%d",&opt);
		getchar();
		switch(opt)
		{
			case 1: append();break;
			case 2: display();break;
			case 3: length();printf("List length=%d\n",len);break;
			case 4: delete();break;
			case 10: exit(1);break;
			default: break;
		}
	
	}
	return 0;
}
	
			
