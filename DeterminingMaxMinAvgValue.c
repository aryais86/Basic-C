#include<stdio.h>

int main(){
	int i, total = 0, max = 0, min = 0;
	double avg;
	int arr[10];
	printf("Input 10 Numbers!\n");
	for(i=0;i<10;i++){
		printf("Enter Number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	for(i=0;i<10;i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	
	for(i=0;i<10;i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	
	for(i=0;i<10;i++){
		total += arr[i];
	}
	
//	printf("Total:%d\n",total);
	
	avg = total/10;
	
	printf("Max value inside the array: %d\n", max);
	printf("Min value inside the array: %d\n", min);
	printf("Average Value of array: %.2f", avg);
	return 0;
}
