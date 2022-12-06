//Activity 3/Quiz 1
//Meredores Joshua U.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define p printf
#define sc scanf

float C, F;

int main()
{
p("Enter temperature in Celsius: ");
sc("%f", &C);

system("cls");

F = (C*9/5)+32;
P("Celsius: %.2f\n", C);

F = (C*9/5)+32;
p("Farenheit: %.2f\n", F);


return 0;
}
