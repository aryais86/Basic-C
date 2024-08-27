#include <stdio.h>

void func1();
void func2();
void func3();

void luas_lingkaran(int *val, int r){
//	printf("val :%d\n", &val);
	*val = (22 * r * r)/7; // pass by reference
}


void main(){
	int val = 0;
	luas_lingkaran(&val,7);
	printf("%d", val);
}
