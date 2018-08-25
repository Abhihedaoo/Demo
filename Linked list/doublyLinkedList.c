#include<stdio.h>
#include<stdlib.h>

struct Node {
	struct Node* prev;
	int data;
	struct Node* next;
};

struct Node* InsertAtBeg(struct Node* head, int value) {
	struct Node* newNode = (struct Node*) malloc (sizeof(struct Node));
	newNode->prev = NULL;
	newNode->data = value;
	newNode->next = NULL;
	if (head == NULL) {
		head = newNode; 
		return head;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
	return head;
}

void Print(struct Node* head) {
	while ( head != NULL ) {
		printf(" %d", head->data); 
		head = head->next;
	}
}

int main() {
	//variable declaration
	int value, i, n;
	struct Node* head = NULL;
	
	//Number of inputs
	printf("\n Enter Number of inputs :: ");
	scanf("%d", &n);
	
	//Input all values and show
	
	//Get all inputs
	for ( i = 0; i < n; i++ ) {
		printf("\nElements :: ");
		scanf ("%d", &value);
		head = InsertAtBeg(head, value);
		Print(head);
	}
}

