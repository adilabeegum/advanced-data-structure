Aim

To write a C program to read and display the elements of a 2D array using a function.

Algorithm
Start.
Declare a 2 × 2 integer array num.
Read 4 numbers into the array using nested for loops.
Pass the array to the displaynumbers() function.
In the function, use nested for loops to access each element.
Display all the elements of the array.
Stop.

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

