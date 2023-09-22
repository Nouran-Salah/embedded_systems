/*
 * main.c
 *
 *  Created on: Sep 21, 2023
 *      Author: NOURAN SALAH
 */


#include <stdio.h>

int main() {
    float a[6];
    float sum;
    int n,r;
 printf("Enter numbers of data : ");
 scanf("%d",&n);
  
    for (r= 0; r < 6; r++) {
            printf("Enter number: ");
            scanf("%f", &a[r]);
            sum+=a[r];
            
    }
 
printf("average is %.2f",sum/n);
    
    

    return 0;
}



