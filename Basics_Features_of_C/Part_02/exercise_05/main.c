#include <stdio.h>

int main(void) {
    // Only using what the book has taught so far, this is horrible.
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
            &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12, &d13, &d14, &d15, &d16);

    printf("%2d %2d %2d %2d\n", d1, d2, d3, d4);
    printf("%2d %2d %2d %2d\n", d5, d6, d7, d8);
    printf("%2d %2d %2d %2d\n", d9, d10, d11, d12);
    printf("%2d %2d %2d %2d\n\n", d13, d14, d15, d16);

    int row1 = d1 + d2 + d3 + d4;
    int row2 = d5 + d6 + d7 + d8;
    int row3 = d9 + d10 + d11 + d12;
    int row4 = d13 + d14 + d15 + d16;

    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);

    int column1 = d1 + d5 + d9 + d13;
    int column2 = d2 + d6 + d10 + d14;
    int column3 = d3 + d7 + d11 + d15;
    int column4 = d4 + d8 + d12 + d16;

    printf("Column sums: %d %d %d %d\n", column1, column2, column3, column4);

    int diagonal1 = d1 + d6 + d11 + d16;
    int diagonal2 = d13 + d10 + d7 + d4;

    printf("Diagonal sums: %d %d\n", diagonal1, diagonal2);

    return 0;
}