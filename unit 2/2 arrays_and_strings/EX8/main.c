/*
 * main.c
 *
 *  Created on: Sep 21, 2023
 *      Author: NOURAN SALAH
 */
#include <stdio.h>
#include <string.h>
int main() {
  printf("Enter a string       : ");
  int i,len;
  char string[100];
  char b[100];
  gets(string);
  len=strlen(string);
  for(i=0;i<len;i++)
  {  if(string[i]==0)
       break;
  else 
      b[i]=string[len-1-i];
  }
 printf("Reverse of string is : %s",b);
    return 0;
}
