//Activity 3/Quiz 1
//Meredores Joshua U.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define p printf
#define sc scanf

float  F, C;

int main()
{

p("Enter temperature in Fahrenheit: ");
sc("%f", &F);


system("cls");

C =(F-32)*5/9;
p("Fahrenheit: %.2f\n", F);

C =(F-32)*5/9;
p("Celsius: %.2f\n", C);



return 0;
}
