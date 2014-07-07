#include<stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


int main(int arg, int *argv[] ) 
{
   int test = 123;
   int *ptr = malloc(10 * sizeof(int));
   printf("pointer %p \n", ptr);    

   return 0;
}
