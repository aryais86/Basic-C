#include<stdio.h>
#include<stdlib.h>

struct Mhs{
	char name[20];
	int nim;
	float gpa;
};

int main(){
	struct Mhs student;
	FILE *file;
	int i;
	
	file = fopen("Mhs.dat", "wb");
	if(file==NULL){
		printf("File doesn't exist\n");
		return 1;
	}
	
	for(i=0;i<1;i++){
		printf("Enter student %d details!\n", i+1);
		printf("Name: ");
		scanf("%[^\n]", student.name);
		getchar();
		printf("NIM: ");
		scanf("%d", &student.nim);
		printf("GPA: ");
		scanf("%f", &student.gpa);
		
		fwrite(&student, sizeof(struct Mhs), 1, file);
	}
	
	fclose(file);
	printf("Data Successfully added");
	
	
	return 0;
}
