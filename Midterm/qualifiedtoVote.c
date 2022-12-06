// JOSHUA MEREDORES
// BSIT 1F
// QUALIFIED TO VOTE

#include <stdio.h>
#include <stdlib.h>

int age;
int main()
{
    printf("Enter the Age: ");
    scanf("%i", &age);

    if(age>=18) {
        printf("Qualified to Vote!\n");
    }
    else{
        printf("Too Young!\n");
    }

    return 0;
}
