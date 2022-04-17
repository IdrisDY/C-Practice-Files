
#include "stdio.h"
#include "string.h"
#include "stdarg.h"
/*
int  main(void)
{
   int i;
   char characterName[] = "J";
   for (i =0;i<10; i++)
   {
   printf( "I  am %d old\n", i);
   printf( "I  am %c \n", characterName);
}
return (0);
}
/* user input



#include "stdio.h"

int main(){
int age;
   printf("Enter your age: ");
scanf("%d", &age);
printf(" You are %d old", age);
}
*/
/* building a calc"


#include "stdio.h"
int main()
{
   int num;
   int num1;
int num2;
printf("Enter first number:");
scanf( "%d", &num1);
printf("Enter second number:");
scanf( "%d", &num2);

num = num1+num2;
printf(" Addition result is %d ,\n and Mean result is %f\n" , num, num*2);
return(0);
}

*/
/* Arrays



struct Wasteman {
   char name[50];
   char job[20];
};
 
int main(){
int array[6] = {6,7,8,9,5,6};
printf("%d", array[5]);

struct Wasteman Waste1;
strcpy(Waste1.job, "Art");
printf("%s", Waste1.job);
}


// SUBTRACT variadic

int subT(int n, ...)
{
   va_list pa;
   va_start(pa,n);
   int i = 0 ,result = 0;
   for(i = 0; i < n ; i++)
   {
      result = (va_arg(pa,int ));
      result--;

                     printf("%d \n", va_arg(pa,int));
      va_end(pa);
      return result;
         }

} 

int main(){

printf("%d,%d,%d,%d" ,subT(2, 10,6,8));

}
*/

int main(){
   char c = 'g';
   putchar(c);

}

