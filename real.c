#include "stdio.h"

int main(void)
{
   int m;
   int z;
   z = "Z";
   if (m < z)
   {
   printf("%d", m);
   }

   return(0);
   }

#include <stdlib.h>


int main( int argc, char *argv[]){
   int i;

   for(i=0;i < argc;i++)
   {
printf("Myname is %s\n", argv[i])
   }
   return(argc);
}