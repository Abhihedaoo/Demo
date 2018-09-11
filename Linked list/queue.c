#include <stdio.h>

const int MAX = 5;

static int rear, front;

void Insert(int q[], int value) {
	if (rear == MAX) {
		printf("Queue is full!");
		return;
	} 
	rear ++;
	q[rear] = value;
}

void Delete (int q[]) {
	int i;
	if (front == -1) {
		printf ("Queue is empty :: ");
		return;
	}
	for (i = 0; i<=rear; i++) {
		q[front] = q[front + 1];
	}
	rear --;
}

void Print (int q[]) {
	int i;
	for (i = front; i <= rear; i ++ ) {
		printf ("%4d", q[i]);
	}
	printf ("\n");
}

int main () {
	int value, n;
	int q[MAX];
	int i;
	rear = -1;
	front = 0;
	
	printf("Enter number of elements to insert (<5) :: ");
	scanf("%d", &n);
	
	for ( i = 0; i < n; i++ ) {
		printf("\n Enter Element :: ");
		scanf ("%d", &value);
		Insert (q, value);
	}
	Print(q);
	Delete(q);
	Print(q);
	return 0;
}
