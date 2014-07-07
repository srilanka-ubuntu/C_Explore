#include<stdio.h>

int main(int arg, int *argv[] ) 
{
   int var = 123;
   int *p_var = &var;

  printf("data  %d ::: typeof  \n",var);
  printf("pointer %p \n ", p_var);
   

   return 0;
}
