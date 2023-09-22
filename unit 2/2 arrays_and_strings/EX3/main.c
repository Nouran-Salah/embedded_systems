/*
 * main.c
 *
 *  Created on: Sep 21, 2023
 *      Author: NOURAN SALAH
 */
#include <stdio.h>

int main() {
    int a[100][100];
    int b[100][100];
    int r,c,j,i;
    printf("Enter rows and columns : ");
    scanf("%d %d",&r,&c);
    printf("enter elements of matrix\n");
    for (i= 0; i < r; i++) {
        for(j=0;j<c;j++){
            printf("Enter elements a[%d][%d]: ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("entered matrix\n");
  for (i= 0; i < r; i++) {
        for(j=0;j<c;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("tranpose of matrix : \n");
  for (i= 0; i < c; i++) {
        for(j=0;j<r;j++){
          b[i][j]=a[j][i];
      printf ("%d  ",b[i][j]);
     
        }
        printf("\n");
    
    }
 
        
    

    return 0;
}
