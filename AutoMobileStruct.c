#include<stdio.h>

struct Automobile{
	int year;
	char model[8];
	int engine_power;
	float weight;
};

int main(){
//	To add a specific number of cars
//	int nCars;
//	printf("Enter how many Cars to be added: ");
//	scanf("%d", &nCars);
//	struct automobile cars[nCars];
	
	struct Automobile cars[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("Enter Car %d Details!\n", i+1);
		printf("Car Year : ");
		scanf("%d", &cars[i].year);
		printf("Car Model: ");
		scanf(" %[^\n]", cars[i].model);
		printf("Engine Power(hp): ");
		scanf("%d", &cars[i].engine_power);
		printf("Weight (kg): ");
		scanf("%f", &cars[i].weight);
		printf("\n");
	}
	
	for(i=0;i<5;i++){
		printf("Car %d Details!\n", i+1);
		printf("Car Year : ");
		printf("%d\n", cars[i].year);
		printf("Car Model: ");
		printf(" %s\n", cars[i].model);
		printf("Engine Power: ");
		printf("%d\n", cars[i].engine_power);
		printf("Weight : ");
		printf("%.2f kg\n", cars[i].weight);
		printf("\n");
	}
	
	
	return 0;
}
