#include <stdio.h>

void printStarRectangle(int n) {
	int i,j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Input width and height of the rectangle
    printf("Enter side of the rectangle: ");
    scanf("%d", &n);

    // Print the star rectangle
    printStarRectangle(n);

    return 0;
}
