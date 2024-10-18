#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

int remove_loop(struct node *);
struct node *head=NULL;
struct node *head_second=NULL;
static int len;
int append()
{
	int num,i;
	struct node *p;
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter the node details\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	p=head;
	if(head==NULL)
		head=temp;
	else
	{
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
	return 0;
}

void display_link()
{
	struct node *temp;
	temp=head;
	printf("NODE_data	Link_DATA\n");
	while(temp->link!=NULL)
	{
		printf("%d\t%d\n",temp->data,temp->link->data);
		temp=temp->link;
	}
	printf("\n");
}

void display()
{
	struct node *temp;
	temp=head;
	printf("NODE addr	DATA	NEXT-NODE-arrd\n");
	while(temp!=NULL)
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
	while(temp!=NULL)
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

void delete_particular(int dat)
{
	struct node *temp,*prev;
	temp=head;
	prev=head;
	while(prev->link!=NULL)
	{
		if(prev->link->data == dat)
		{
			temp=prev->link;
			prev->link=temp->link;
			temp->link=NULL;
			free(temp);		
		}
		prev=prev->link;
	}
}
void delete_recursive()
{
	struct node *temp,*fre;
	temp=fre=head;
	while(temp->link!=NULL)
	{
		fre=temp;
		temp=temp->link;
		head=temp;
		fre->link=NULL;
		free(fre);
		delete_recursive();
	}
	head=NULL;
	free(temp);
}
void duplicate()
{
	struct node *fast, *slow;
	int count=1;
	slow=head;
	fast=head;
	while(slow->link!=NULL)
	{
		fast=slow->link;
		while(fast!=NULL)
		{
			if(slow->data == fast->data)
			{
				printf("Data matched %d at node no %d\n",slow->data,count);
			}
			fast=fast->link;
			count++;
		}
		slow=slow->link;
	}
}
int loop_check()
{
	struct node *fast, *slow;
	int flag=0;
	slow=head;
	fast=head;
	while(slow && fast)
	{
		slow=slow->link;
		fast=fast->link->link;
		if(slow == fast)
		{
			return 1;
		}
	}
	return 0;
}
int loop_check_del()
{
	struct node *fast, *slow;
	int flag=0;
	slow=head;
	fast=head;
	while(slow && fast)
	{
		slow=slow->link;
		fast=fast->link->link;
		if(slow == fast)
		{
			remove_loop(fast);
			printf("LOOP Removed\n");
		}
	}
	return 0;
}

int remove_loop(struct node *del)
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->link==del)
		{
			temp->link=NULL;
		}
		else
			temp=temp->link;
	}
}
	
/*
void loop_check()
{
	struct node *fast, *slow;
	int flag=0;
	slow=head;
	fast=head;
	while(slow->link!=NULL)
	{
		fast=slow->link;
		while(fast!=NULL)
		{
			if(slow == fast)
			{
				printf("Loop detected at %p\n",slow);
				flag=1;
			}
			fast=fast->link;
		}
		slow=slow->link;
	}
	if(flag==0)
		printf("Loop not detected\n");
	else
		printf("Loop detected\n");
}
*/
void create_loop()
{
	append();
	append();
	append();
	append();
	head->link->link->link->link=head;	
}

int half()
{
	struct node *fast, *slow,*temp;
	slow=head;
	fast=head->link;
	while(fast!=NULL&&fast->link!=NULL)
	{
		slow=slow->link;
		fast=fast->link->link;
	}
	head_second=slow->link;
	slow->link=NULL;

//	struct node *temp;
        temp=head;
        printf("NODE addr       DATA    NEXT-NODE-arrd\n");
        while(temp!=NULL)
        {
                printf("%p\t%d\t%p\n",temp,temp->data,temp->link);
                temp=temp->link;
        }
        printf("\n");
	temp=NULL;
	printf("Second list\n");
        temp=head_second;
        printf("NODE addr       DATA    NEXT-NODE-arrd\n");
        while(temp!=NULL)
        {
                printf("%p\t%d\t%p\n",temp,temp->data,temp->link);
                temp=temp->link;
        }
        printf("\n");
//	printf("half list data=%d\n",slow->data);
	return 0;
}
int main()
{
	int count=0;

	while(1)
	{
		int opt,dat;
		printf("Enter the options:\n1.append\n2.display\n3.length\n4.delete\n5.delete_particular\n6.delete_recursive\n7.duplicate\n8.Create loop\n9.loop check\n10.loop check delete\n11.display_link\n12.Half list\n13.exit\n");
		scanf("%d",&opt);
		getchar();
		switch(opt)
		{
			case 1: append();break;
			case 2: display();break;
			case 3: length();printf("List length=%d\n",len);break;
			case 4: delete();break;
			case 5: printf("Enter data to delete\n");
				scanf("%d",&dat);
				delete_particular(dat);
				break;
			case 6: delete_recursive();
			case 7: duplicate();break;
			case 8: create_loop();break;
			case 9: if(loop_check())
					printf("LOOP found\n");
				else
					printf("LOOP not Found\n");
				break;
			case 10: loop_check_del();break;
			case 11: display_link();break;
			case 12: half();break;
			case 13: exit(1);break;
			default: break;
		}
	
	}
	return 0;
}
	
			
