// JOSHUA MEREDORES
// BSIT 1F
// GRADE COMPUTATIONS


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float QUIZ, ASSIGN, PROJ, CS, ME, GRADE, SUM;
double E;
int main ()
{
    printf("Enter your Quiz Grades Result: ");
    scanf("%f", &QUIZ);

    printf("Enter your Assignment Grades Result:");
    scanf("%f", &ASSIGN);

     printf("Enter your Project Grades Result: ");
     scanf("%f", &PROJ);

     printf("Enter your Class Standing Grades Result: ");
     scanf("%f", &CS);

     printf("Enter your Major Exams Result: ");
     scanf("%f", &ME);



     system("cls");

      GRADE = (QUIZ*.15)+(ASSIGN*.15)+(PROJ*.20)+(CS*.10)+(ME*.40);


    printf("The Quiz Grade Result is : %.2f \n", QUIZ);
    printf("The Assignment Grade Result is : %.2f \n", ASSIGN);
    printf("The Project Grade Result is : %.2f \n", PROJ);
    printf("The Class Standing Grade Result is : %.2f \n", CS);
    printf("The Major Exam Result is : %.2f \n", ME);
    printf(" The Grade Total is  : %.2f \n", GRADE);

     return 0;

}




