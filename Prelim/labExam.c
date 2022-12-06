#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float one;
float two;
float Three;
float S, D, P, Q;
int E;

int main()
{
    printf("Enter your first number: ");
    scanf("%f", &one);

    printf("Enter your second number: ");
    scanf("%1f", &two);

     printf("Enter your Third number: ");
    scanf("%2f", &Three);



    S = one+two;
    D = one-two;
    P = one*two;
    Q = one/two;
    E = pow(one, two);

    system("clear");

    printf("Your Sum             : %.3f \n", S);
    printf("Your Difference      : %.3f \n", S);
    printf("Your Product         : %.3f \n", S);
    printf("Your Quotient        : %.3f \n", S);
    printf("Your Exponent        : %.3f \n", S);

    return 0;
}
