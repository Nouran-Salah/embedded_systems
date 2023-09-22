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
  for(i=0;i<=n-1;i++){
      scanf("%d",&a[i]);
  }
 printf("Element to be inserted : \n");
 scanf("%d",&num);
 printf("Enter the location : \n");
 scanf("%d",&p);
 for(i=n;i>=p;i--){
  a[i]=a[i-1];

 }
n++;
a[p]=num;
 
 for(i=0;i<n;i++){

     printf("%d ",a[i]);
 }
 
    return 0;
}
