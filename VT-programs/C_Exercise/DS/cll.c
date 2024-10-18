#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};
typedef struct node CL;
int add(CL **temp,int i)
{
	CL *ptr;
	CL *t;
	t= *temp;
	ptr=(CL *)malloc(sizeof(CL));
	ptr->data = i;
	ptr->link= *temp;
	if(*temp == NULL)
	{
		ptr->link=ptr;
	}
	else
	{
		while(t->link != *temp)
		{
			t=t->link;
		}
			t->link=ptr;
	}
	*temp=ptr;
}

int print(CL *head)
{
	CL *temp = head; 
	if (head != NULL) 
	{ 
        	do
        	{ 
            		printf("%d ", temp->data); 
            		temp = temp->link; 
        	} 
        while (temp != head); 
    	}
}	
int main()
{
	CL *head=NULL;
	int i=1,j=0;
	for(j=0;j<10;j++)
	{
		add(&head,i);
		i++;
	}
	print(head);
	return 0;
}
