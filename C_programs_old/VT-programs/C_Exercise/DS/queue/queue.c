
#include<stdio.h>
#include<stdlib.h>

#define maxsize 5

int front = -1 , rear = -1 ;
int queue[maxsize];

void enqueue()
{
	int data;
	printf("Enter the data\n");
	scanf("%d",&data);
	if(front == -1 && rear == -1)
	{
		printf("List is empty\n");
		front =0;
		rear =0;
	}
	else
	{
		if(rear == maxsize-1)
		{
			printf("Queue Overflow\n");
		}
		else
		{
			rear =rear+1;
		}
	}
	queue[rear]=data;
}

void dequeue()
{
	if(front == -1 || front > rear)
		printf("No elements to delete\n");
	else
	{
		if(front == rear)
		{
			front = -1;
			rear = -1;
		}
		else
		{
			front = front+1;
		}
	}
}

void display()
{
	int i;
	if(rear == -1)
		printf("Empty Queue\n");
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("i=%d\t%d\n",i,queue[i]);
		}
	}
}

int main()
{
	int ch;
	while(1)
	{
		printf("Enter\n1.enque\n2.deque\n3.disp\n4.exit\n");
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



/*




#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 5  
void insert();  
void delete();  
void display();  
int front = -1, rear = -1;  
int queue[maxsize];  
void main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
        printf("\n*************************Main Menu*****************************\n");  
        printf("\n=================================================================\n");  
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        printf("\nEnter your choice ?");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }  
}  
void insert()  
{  
    int item;  
    printf("\nEnter the element\n");  
    scanf("\n%d",&item);      
    if(rear == maxsize-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;  
    printf("\nValue inserted ");  
      
}  
void delete()  
{  
    int item;   
    if (front == -1 || front > rear)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
              
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
        printf("\nvalue deleted ");  
    }  
      
      
}  
      
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        for(i=front;i<=rear;i++)  
        {  
            printf("\n%d\n",queue[i]);
	}
}
}

*/
