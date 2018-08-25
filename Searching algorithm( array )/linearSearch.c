//Array must be sorted

#include <stdio.h>
void linearSearch(int values[], int valueToSearch, int numberOfElements){
	int size, i, count = 0;
	
	for ( i = 0; i < numberOfElements; i++ ){
	 	if (valueToSearch == values[i]){
	 		count = 1;
	 		printf("value %d found at position %d", valueToSearch, i + 1);
		 }
	}
	 if (count == 0){
	 	printf("Value not found ");
	 }
}

void binarySearch(int values[], int valueToSearch, int numberOfElements){
	int min = 0, max = numberOfElements -1, mid;
	
	while ( min < max ) {
		mid = (min + max)/2;
		if ( values[mid] == valueToSearch ){
			printf("value %d found at position %d", valueToSearch, mid + 1);
		} else if (mid > valueToSearch) {
			max = mid;
		} else {
			min = mid + 1;
		}
		
	}
}

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
	
	//linearSearch(values, valueToSearch, numberOfElements);
	binarySearch(values, valueToSearch, numberOfElements);
	return 0;
}

