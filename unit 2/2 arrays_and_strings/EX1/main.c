/*
 * main.c
 *
 *  Created on: Sep 21, 2023
 *      Author: NOURAN SALAH
 */
/
 

#include <stdio.h>

int main() {
    float a[2][2];
    float b[2][2];
    float sum[2][2];
    int r, c, row, col;

    printf("Enter the values for the first matrix:\n");
    for (r = 0; r < 2; r++) {
        for (c = 0; c < 2; c++) {
            printf("Enter a%d%d: ", r + 1, c + 1);
              scanf("%f", &a[r][c]);
        }
    }

    printf("Enter the values for the second matrix:\n");
    for (row = 0; row < 2; row++) {
        for (col = 0; col < 2; col++) {
            printf("Enter b%d%d: ", row + 1, col + 1);
            scanf("%f", &b[row][col]);
        }
    }

    for (int d = 0; d < 2; d++) {
        for (int e = 0; e < 2; e++) {
            sum[d][e] = a[d][e] + b[d][e];
        }
    }

    printf("Result of matrix addition:\n");
    for (int d = 0; d < 2; d++) {
        for (int e = 0; e < 2; e++) {
            printf("%.2f", sum[d][e]); // Added space and limited to 2 decimal places
        }
        printf("\n");
    }

    return 0;
}



