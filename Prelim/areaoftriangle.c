// AREA OF TRIANGLE
// JOSHUA MEREDORES

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// B for the length of the base
// H height of the triangle
// A for area

// H height of the triangle
// A for area
float b, h,A;

int main()
{
    printf("Enter the value of Base: ");
    scanf("%f", &b);

    printf("Enter the value of Height: ");
    scanf("%f", &h);

  system("cls");

    A = (b*h)/2;  //P/MD/AS // Area = (Base x Height)/2
    printf("The value of Area is %.2f", A);

    return 0;

}
