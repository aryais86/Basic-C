#include<stdio.h>

void swap(char *a, char *b){
	char c;
	c=*a;
//	printf("c=%c\n", c);
	*a=*b;
//	printf("a=%c\n", *a);
	*b=c;
//	printf("b=%c\n", *b);
}

int main() {
	char x,y;
	printf("Swap Char\n");
	printf("Char 1 : ");
	scanf("%c", &x);
	getchar();
	printf("Char 2 : ");
	scanf("%c", &y);
	getchar();
	printf("Char Before Swap: x=%c y=%c\n", x,y);
	swap(&x,&y);
	printf("After Swap\n");
	printf("x = %c y = %c", x,y);
	return 0;
}
