#include <stdio.h>
 
int main() {
    int i, j, rows;
 printf("Enter the number of rows\n");
    scanf("%d", &rows);
 
    for (i = 0; i < rows; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0; j < rows; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
