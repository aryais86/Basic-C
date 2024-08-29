#include<stdio.h>

void inputNum(int arr[], int size){
	int i;
	for(i=0;i<size;i++){
		printf("Input Number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
}

int findMax(int *arr, int size) {
	int max = *arr;
	int i;
	
	for(i = 0; i < size; i++) {
		if (*(arr + i) > max) {
		max = *(arr + i);
		}
	}
	return max;
}

int findMin(int *arr, int size) {
	int min = *arr;
	int i;
	
	for(i = 0; i < size; i++) {
		if (*(arr + i) < min) {
		min = *(arr + i);
		}
	}
	
	return min;
}

	int main() {
	int size;
	printf("How many Numbers to be added: ");
	scanf("%d", &size);
	
	int arr[size];
	int i;
	
	inputNum(arr,size);
	
	printf("The 10 Numbers : ");
	for(i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	
	printf("Maximum Value: %d\n", findMax(arr,size));
	printf("Minimum Value: %d\n", findMin(arr,size));
	
	return 0;
	}
