#include<stdio.h>

int main() {
	float student_IPK;
	printf("Enter Student's IPK: ");
	scanf("%f", &student_IPK);
	if(student_IPK >=3.5 && student_IPK <=4.0){
	printf("Cumlaude\n");
	}else if(student_IPK >=3.0 && student_IPK <=3.4){
	printf("Outstanding\n");
	}else if(student_IPK >=2.5 && student_IPK <=2.9){
	printf("Very Good\n");
	}else if(student_IPK >=2.0 && student_IPK <=2.4){
	printf("Good\n");
	}else{
	printf("Poor\n");
	}
return 0;
}
