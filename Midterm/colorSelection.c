// MEREDORES, JOSHUA U.
// BSIT 1F
// COLOR SELECTION

#include <stdio.h>
#include <stdlib.h>

char color;
int main ()
{
    printf("Enter the Color: ");
    scanf("%c", &color);

    printf("-------------------------\n");

    if(color == 'B'|| color=='b') {
        printf("Blue");
    }
    else if(color=='R' || color=='r') {
        printf("Red");
    }
    else if(color=='G' || color=='g') {
        printf("Green");
    }
    else if(color=='Y' || color=='y') {
        printf("Yellow");
    }
    else {

            printf("Unknown Color");
        }
      return 0;
}
