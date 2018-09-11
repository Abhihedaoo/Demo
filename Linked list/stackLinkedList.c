#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node* next;
};

struct Node* Push (struct Node* head, int value) {
	struct Node* newNode = (struct Node*) malloc (sizeof(struct Node));
	newNode->data = value;
	newNode->next = NULL;
	if (head == NULL) {
		head = newNode;
		return head;
	} else {
		newNode->next = head;
		head = newNode;	
		return head;
	}
}

struct Node* Pop(struct Node* head) {
	head = head->next;
	return head;
}

void Print (struct Node* head) {
	while (head != NULL) {
		printf("%4d", head->data);
		head = head->next;
	}
	printf("\n");
}

int main () {
	
	struct Node* head = NULL;
	
	head = Push(head, 23);
	head = Push(head, 34);
	head = Push(head, 22);
	head = Push(head, 45);
	head = Push(head, 12);	
	Print(head);
	head = Pop(head);
	Print(head);
	
	return 0;
}
