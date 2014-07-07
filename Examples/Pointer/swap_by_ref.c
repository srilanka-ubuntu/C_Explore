#include<stdio.h>


void swap_by_value(int x, int y){
  
   printf("VALUE >> x is %d :: y is %d \n ", x,y );
    int temp;
    temp = x;
    x = y;
    y = temp;
    
    printf("VALUE >> x is %d :: y is %d \n ", x,y );
    puts("");
}

void swap_by_ref(int *xoo, int *yoo) {

  printf("REF >> x is %p :: y is %p \n ", xoo,yoo );
 int temp;
 temp = *xoo;
 *xoo = *yoo;
 *yoo = temp; 
    printf("REF >> x is %d :: y is %d \n ",*xoo,*yoo);
  
}


 int main( int argc, char *argv[] ) {
 
  int x = 10;
  int y = 20;
   
 int *xptr;
 int *yptr;
 
  xptr = &x;
  yptr = &y;

  printf("MAIN >> x is %d :: y is %d \n ", x,y );
  swap_by_value(x,y); 
  printf("after value >> x is %d :: y is %d \n ", x,y ); 
     
  swap_by_ref(xptr, yptr);

  printf("after ref >> x is %d :: y is %d \n ", x,y );
   return 0;
}
