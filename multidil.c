#include <stdio.h>
void displaynumbers(int num[2][2]);

int main() {
    int num[2][2];
    printf("Enter 4 numbers:\n");

    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            scanf("%d", &num[i][j]);
        }
    }
    displaynumbers(num);

    return 0;
}


void displaynumbers(int num[2][2]) {
    printf("\nDisplay:\n");

    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            printf("%d\n", num[i][j]);
        }
    }
}

