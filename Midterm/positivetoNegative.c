#include <stdio.h>
#include <stdlib.h>

  int number;
  int main() {

   printf("Enter a number: ");
   scanf("%i", &number);


   if(number>=0) {
        printf("POSITIVE NUMBER");
   }
   else {
        printf("NEGATIVE NUMBER");
   }

       return 0;
   }
