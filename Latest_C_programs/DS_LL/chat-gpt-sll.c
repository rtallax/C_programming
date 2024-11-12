#include <stdio.h>
#include <stdlib.h>

//Define the structure for a node
struct Node {
	int data;
	struct Node* next;
};

//Function to create a new node
struct Node* createNode(int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

//Function to insert a node at the beginning
void insertAtBeginning(struct Node** head, int data) {
	struct Node* newNode = createNode(data);
	newNode->next = *head;  //Point new node's next to current head
		*head = newNode;         //Update head to the new node
}

//Function to insert a node at the end
void insertAtEnd(struct Node** head, int data) {
	struct Node* newNode = createNode(data);

	if (*head == NULL) {
		*head = newNode;
		return;
	}

	struct Node* temp = *head;
	while (temp->next != NULL) {
		temp = temp->next;   //Traverse to the last node
	}

	temp->next = newNode;   //Set the last node's next to the new node
}

//Function to print the list
void printList(struct Node* head) {
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

//Function to delete a node with a specific value
void deleteNode(struct Node** head, int key) {
	struct Node* temp = *head;
	struct Node* prev = NULL;

	//If the head node holds the key
		if (temp != NULL && temp->data == key) {
			*head = temp->next;   //Update head
				free(temp);           //Free memory
				return;
		}

	//Search for the key to be deleted
		while (temp != NULL && temp->data != key) {
			prev = temp;
			temp = temp->next;
		}

	//If key was not found
		if (temp == NULL) return;

	//Unlink the node from the linked list
		prev->next = temp->next;
	free(temp);   //Free memory
}

int main() {
	struct Node* head = NULL;   //Initialize an empty list

		//Insert some elements
	insertAtBeginning(&head, 3);
	insertAtBeginning(&head, 2);
	insertAtEnd(&head, 4);
	insertAtEnd(&head, 5);

	printf("Linked list: ");
	printList(head);

	//Delete a node
	deleteNode(&head, 3);
	printf("After deleting 3: ");
	printList(head);

	return 0;
}

