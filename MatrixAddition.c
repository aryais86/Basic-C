#include<stdio.h>

int main(){
	int a,b,c,d,e,f,i,j;
	
	printf("Input no.of rows for matrix A : ");
	scanf("%d", &a);
	printf("Input no.of columns for matrix A : ");
	scanf("%d", &b);
	printf("Input no.of rows for matrix B : ");
	scanf("%d", &c);
	printf("Input no.of columns for matrix B : ");
	scanf("%d", &d);
	
	int A[a][b];
	int B[c][d];
	int C[e][f];
	
	if(a ==c && b == d){
		printf("Enter elements for matrix A:\n");
		
		for(i = 0;i<a;i++){
			for(j=0;j<b;j++){
				printf("A[%d][%d]: ", i,j);
				scanf("%d", &A[i][j]);
			}
		}
		
		printf("Enter elements for matrix B:\n");
		for(i = 0;i<c;i++){
			for(j=0;j<d;j++){
				printf("B[%d][%d]: ", i,j);
				scanf("%d", &B[i][j]);
			}
		}
		
		for(i = 0;i<a;i++){
			for(j=0;j<b;j++){
				C[i][j] = A[i][j]+B[i][j];
			}
		}
		
		printf("The addtion of the two matrices is: \n");
		
		for(i = 0;i<a;i++){
			for(j=0;j<b;j++){
				printf("%d", C[i][j]);
				printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
