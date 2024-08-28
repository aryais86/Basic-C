#include<stdio.h>

int main(){
	int a,b,c,d,i,j,k;
	
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
	int C[a][d];
	
	if(b == c){
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
			for(j=0;j<d;j++){
				C[i][j] = 0;
			}
		}
		
		for(i = 0;i<a;i++){
			for(j=0;j<d;j++){
				for(k=0;k<b;k++){
					C[i][j] += A[i][k]*B[k][j];
				}
			}
		}
		
		printf("The Multiplication of the two matrices is: \n");
		for(i = 0;i<a;i++){
			for(j=0;j<d;j++){
				printf("%d", C[i][j]);
				printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
