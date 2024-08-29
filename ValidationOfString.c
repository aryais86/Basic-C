#include<stdio.h>
#include<string,h>

int main(){
char string[1000];
int length;

	do{
		printf("Enter String: ");
		scanf("%s", string);
		length = strlen(string);
		
		if(length<5){ // Validation of string
			printf("String Length is too short!\n");
		}else if(length>30){
			printf("String Length is too long\n");
		}else{
			printf("String Successfully Saved!\n");
		}
	
	}while(length<5 || length>30);

return 0;
}

