#include <stdio.h>
#include <stdlib.h>

//Node
struct Node {
	int data;
	struct Node* next;
};

//head


//Insert the value in linked list
struct Node* InsertAtBeg(struct Node* head, int value){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	
	temp->data = value;
	temp->next = head;
	head = temp;
	return head;
}

struct Node* InsertAt(struct Node* head, int pos, int value) {
	int i;
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	newNode->next = NULL;
	if( pos == 1 ) {
		newNode->next = head;
		head = newNode;
		return head;
	}
	struct Node* temp = head;
	for ( i = 0; i < pos - 2; i++ ) {
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	
	return head;
}

struct Node* InsertAtEnd(struct Node* head, int value) {
	struct Node* temp = head;
	struct Node* newNode = (struct Node*) malloc (sizeof(struct Node));
	newNode->data = value;
	newNode->next = NULL;
	while ( temp != NULL ) {
		temp = temp->next;
	}
	temp->next = newNode;
	return head;
}

//Not working properly
//needs to fix it
struct Node* DeleteAt(struct Node* head, int pos) {
		
	int i;
	if (pos == 1) {
		head = head->next;
		return head;
	}
	struct Node* temp = head;
	struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node));
	for ( i = 0; i < pos - 2; i++ ) {
		temp = temp->next;
	}
	temp2 = temp->next;
	temp->next = temp2->next;
	return head;
}

void Print(struct Node* head) {
	while (head != NULL){
		printf(" %d", head->data);
		head = head->next;
	}
}

void ReversePrint(struct Node* head) {
	if (head == NULL) {
		printf ("\n");
		return;
	}
	ReversePrint(head->next);
	printf(" %d", head->data);
}

int main(){
	int n, i, value, pos;
	struct Node* head = NULL;
	printf("Number of elements to enter::");
	scanf("%d", &n);
	for ( i= 0; i < n; i++){
		printf("\nEnter value to enter::");
		scanf("%d", &value);
		head = InsertAtBeg(head, value);
		Print(head);
	}
	printf("\n Reverse List ::    ");
	ReversePrint(head);
	printf("\nEnter the position and value to Insert");
	scanf("%d%d", &pos, &value);
	head = InsertAt(head, pos, value);
	Print(head);
	
//	printf("\n Enter a value to Insert at end :: ");
//	scanf("%d", &value);
//	head = InsertAtEnd(head, value);
//	Print(head);
//	
//	printf("\n Enter the position of the element to delete :: ");
//	scanf("%d", &pos);
//	head = DeleteAt(head, pos);
//	Print(head);
	return 0;
}


	

