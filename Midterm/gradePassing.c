// JOSHUA MEREDORES
// BSIT 1F
// GRADE PASSING


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float QUIZ, ASSIGN, PROJ, CS, ME, GRADE;
double E;
int main ()
{
    printf("Enter your Quiz Grades Result: ");
    scanf("%f", &QUIZ);

    printf("Enter your Assignment Grades Result: ");
    scanf("%f", &ASSIGN);

     printf("Enter your Project Grades Result: ");
     scanf("%f", &PROJ);

     printf("Enter your Class Standing Grades Result: ");
     scanf("%f", &CS);

     printf("Enter your Major Exams Result: ");
     scanf("%f", &ME);



     system("cls");

      GRADE = (QUIZ*.15)+(ASSIGN*.15)+(PROJ*.20)+(CS*.10)+(ME*.40);


    {

    printf(" Your GRADE is : %.2f \n", GRADE);
    }

    if(GRADE >75 ) {
        printf("Congratulations you Passed \n ");
       }
    if (GRADE <75 ){
        printf("Sorry you Failed \n");
        }

        return 0;
}




