#include <stdio.h>
#include <stdlib.h>

//Node
struct Node {
	int data;
	struct Node* next;
};

//head


//Insert the value in linked list
struct Node* Insert(struct Node* head, int value){
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

void Print(struct Node* head) {
	while (head != NULL){
		printf(" %d", head->data);
		head = head->next;
	}
}

int main(){
	int n, i, value, pos;
	struct Node* head = NULL;
	printf("Number of elements to enter::");
	scanf("%d", &n);
	for ( i= 0; i < n; i++){
		printf("\nEnter value to enter::");
		scanf("%d", &value);
		head = Insert(head, value);
		Print(head);
	}
	printf("\nEnter the position and value to Insert");
	scanf("%d%d", &pos, &value);
	head = InsertAt(head, pos, value);
	Print(head);
	return 0;
}


	

