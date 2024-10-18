Implement a Circular queue using Link list:v



Struct node{
	Int empid;
	Char *name;
	Struct node* link;
}

Struct node *head=NULL;

Void add()
{
	Struct node *temp;
	Struct node *other;
	temp=(struct node*)malloc(sizeof(struct node));
	printf(“Enter the empid and Name\n”);
	scanf(“%d%s”,&temp->empid,temp->name);
	other=head;
	temp->link=NULL;
	if(head==NULL)
	{
		printf(“First node
				}

				Void Display()
				{
				Struct node *temp;
				temp=head;
				while(tem
						printf(












							Struct mutex lock;       	//Initialized in the thread
#define NO_OF_ELEMENTS   10
							uint32_t Rx_Interrupt_Handler(uint8_t * param[])
							{
							//Acquire lock
							//           	Mutex_lock(&lock);
							//           	           	//Do some data processing
							//           	           	uint32_t var = (uint32_t *)malloc(NO_OF_ELEMENTS  * sizeof(uint32_t));
							//           	           	           	for(int i=0; i< NO_OF_ELEMENTS; i++)
							//           	           	           	{
							//           	           	           	           	i[var] = *(i + param);    	//Character filling
							//           	           	           	           	}
							//           	           	           	           	Var[i++] = ‘\0’;
							//           	           	           	           	…//Some other interrupt processing code
							//           	           	           	           	return var;
							//           	           	           	           	}
							//
