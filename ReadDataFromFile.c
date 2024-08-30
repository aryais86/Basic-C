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
	
	file = fopen("Mhs.dat", "r");
	if(file==NULL){
		printf("File doesn't exist\n");
		return 1;
	}
	
	printf("NIM	Name	GPA\n");
	while(fread(&student, sizeof(struct Mhs),1,file)){
		printf("%d	%s	%.2f\n",student.nim, student.name,student.gpa);
	}
	
	fclose(file);
	
	
	return 0;
}
