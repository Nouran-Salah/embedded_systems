/*
 * main.c
 *
 *  Created on: Sep 21, 2023
 *      Author: NOURAN SALAH
 */
#include <stdio.h>

int main() {
  printf("Enter no of elements : ");
  int a[1000];
  int i,n,p,num;
  scanf("%d",&n);
  for(i=0;i<n;i++)
      {
      scanf("%d",&a[i]);
      }
 printf("Enter the element to be searched : \n");
 scanf("%d",&num);
 
 for(i=0;i<n;i++){
    if (a[i]==num)
       printf("number found at the location = %d\n",i+1);
    else if(a[i]!=num){
         printf("error");
           break;
       }
    }
 
    return 0;
}
