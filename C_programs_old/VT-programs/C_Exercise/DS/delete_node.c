#include<stdio.h>
#include<stdlib.h>

struct student 
{
	int roll;
	struct student *next;
};
typedef struct student ST;
int add_end(ST **);
void reverse(ST **);
void sort_list(ST **);
void print(ST *);

int main()
{
	char ch;
	ST *hptr = 0;
	do{
		add_end(&hptr);
		printf("Do you want to add another node\n");
		scanf(" %c",&ch);
	}while(ch == 'Y' || ch == 'y');
	printf("list of node\n");
	print(hptr);
}
int add_end(ST **ptr)
{
	ST *temp;
	temp = *ptr;
	temp = (ST*)malloc(sizeof(ST));
	printf("enter the roll number\n");
	scanf("%d",&temp->roll);

	if(*ptr == NULL)
	{
		temp->next = *ptr;
		*ptr = temp;
	}
	else
	{
		ST *temp1;
		temp1 = *ptr;
		while(temp1)
		{
			if(temp1->roll == temp->roll)
			{
				free(temp);
				temp = NULL;
				return;
			}
			temp1 = temp1->next;
		}
		temp1 = *ptr;
		while(temp1->next != NULL)
			temp1 = temp1->next;
		temp->next = temp1->next;
		temp1->next = temp;
	}
}
void print(ST *ptr)
{
	while(ptr)
	{
		printf("%d\n",ptr->roll);
		ptr = ptr->next;
	}
}
