/*
 * main.c
 *
 *  Created on: Sep 21, 2023
 *      Author: NOURAN SALAH
 */
#include <stdio.h>

int main() {
  printf("Enter a string : ");
  int i,len=0;
  int n=100;
  char string[n];
  gets(string);
  for(i=0;i<=n-1;i++)
  {  if(string[i]==0)
  break;
  else
      len++;
  }
 printf("length of string : %d",len);
    return 0;
}
