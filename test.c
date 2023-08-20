#include<stdio.h>
#include<stdlib.h>
#define MAX 50 
void main(){
   int *ptr = malloc(20);

   scanf("%s",ptr);
printf("%s",ptr);
free(ptr);
}