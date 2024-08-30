#include <stdio.h>

int isPrimeChecker(int n, int i) {
    if (n <= 2) 
        if(n==2){
        	return 1;
		}else{
			return 0;
		}
    if (n % i == 0) 
        return 0;
    if (i * i > n) 
        return 1;

    return isPrimeChecker(n, i + 1);
}

int isPrime(int x) {
	
    return isPrimeChecker(x, 2);
}

int main() {
	int t=0,i;
	
	
	do{
		printf("Input test case: ");
		scanf("%d", &t);
		if(t<1 || t>100){
			printf("Test Case is invalid!\n");
		}
	}while(t<1 || t>100);
	
	
	int x[t];
	
	for(i=0;i<t;i++){
		printf("Enter number %d: ", i+1);
    	scanf("%d", &x[i]);
	}
	
	for(i=0;i<t;i++){
    	if (isPrime(x[i]))
        	printf("Case #%d : Prime Number\n", i+1);
    	else
       		printf("Case #%d : Not Prime Number\n", i+1);
	}
	
    
    return 0;
}

