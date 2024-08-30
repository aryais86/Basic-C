#include <stdio.h>

int isLetterOrDigit(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
}

int countWords(FILE *file) {
    int count = 0;
    char c;
    int temp = 0;

    while ((c = fgetc(file)) != EOF) {
        if (!isLetterOrDigit(c)) {
        	temp = 0;
        }else if(temp == 0){
        	temp =1;
        	count++;
		}
    }

    return count;
}

int main() {
    char fileName[100];
    FILE *file;
    int count;

    printf("Masukkan nama file: ");
    scanf("%s", fileName);

    file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Tidak dapat membuka file %s\n", fileName);
        return 1;
    }

    count = countWords(file);
    printf("Jumlah kata dalam file %s: %d\n", fileName, count);

    fclose(file);
    return 0;
}

