#include <stdio.h>



int main(){
	int values[10], valueToSearch, i, numberOfElements, count;
	
	printf("Enter the number of elements in an array :: ");
	scanf("%d", &numberOfElements);
	printf("\n Enter the values in a array :: ");
	for ( i = 0; i < numberOfElements; i++ ){
		scanf("%d", &values[i]);
	}
	
	printf("\n Enter the number to search :: ");
	scanf("%d", &valueToSearch);
	
	binarySearch(values, valueToSearch, numberOfElements);
	return 0;
}
