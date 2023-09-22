/*
 * main.c
 *
 *  Created on: Sep 21, 2023
 *      Author: NOURAN SALAH
 */
#include <stdio.h>

int main() {
  printf("Enter a string : ");
  int i,count=0;
  char letter;
  char string[100];
  gets(string);
  printf("Enter a character to find frequency : ");
  scanf("%c",&letter);
  for(i=0;i<=strlen(string);i++)
  {
      if(string[i]==letter)
      count++;
  }
 printf("frequency of %c = %d",letter,count);
    return 0;
}
