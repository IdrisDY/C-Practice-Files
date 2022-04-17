#include "stdarg.h"
#include "stdio.h"

void print_line(int n)
{
   int i =0;
   int *p;
   char  c = '_';
   char * pc = &c;
  // p = &c;
   if ( n <= 0){
     // s putchar("\n");
   }

   for( i = 0; i <n; i++ ){
      putchar(c);
            
     printf("%c", c);
   }
   putchar('\n');
}
int main()
{
   print_line(10);
   print_line(20);
}

//Dereferencing pointers
