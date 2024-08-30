#include<stdio.h>

struct ipkmhs{
	char nim[11];
	char name[30];
	float gpa;
};

int main(){
	struct ipkmhs ipk[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("Enter Student %d ipk!\n", i+1);
		printf("NIM: ");
		scanf("%s", ipk[i].nim);
		printf("Name: ");
		scanf(" %[^\n]", ipk[i].name);
		printf("GPA: ");
		scanf("%f", &ipk[i].gpa);
	}
	
	printf("Mhs gpa >= 3.0: \n");
	for(i=0;i<5;i++){
		if(ipk[i].gpa >= 3.0){
			printf("%s\n", ipk[i].name);
		}
	}
	
	printf("Mhs gpa < 3.0: \n");
	for(i=0;i<5;i++){
		if(ipk[i].gpa < 3.0){
			printf("%s\n", ipk[i].name);
		}
	}
	
	return 0;
}
