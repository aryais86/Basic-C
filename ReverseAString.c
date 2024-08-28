#include<stdio.h>
#include<string.h>


int main(){
	int i,j,length;
	char s[1][1000];
//	printf("Input length of string: ");
//	scanf("%d", &sl);

	
	for(i=0; i<1;i++){
        printf("Input String: ");
        scanf("%s", s[i]);
        length = strlen(s[i]);
	}
//	printf("%d\n", length);
	
	
	for(i=0; i<1;i++){
        printf("input : %s\n", s[i]);
	}
	
    for (i = 0; i < 1; i++) {
        for (j = 0; j < length / 2; j++) {
            char temp = s[i][j];
            s[i][j] = s[i][length - j - 1];
            s[i][length - j - 1] = temp;
        }
        printf("rotated: %s\n",  s[i]);
    }
	return 0;
}
