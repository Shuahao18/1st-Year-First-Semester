// JOSHUA U. MEREDORES
// BSIT 1F
// ELSE IF STATEMENT


 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

double QUIZ, ASSIGN, PROJ, CS, ME, GRADE;
double E;
int main ()
{
    printf("Enter your Quiz Grades Result: ");
    scanf("%lf", &QUIZ);

    printf("Enter your Assignment Grades Result: ");
    scanf("%lf", &ASSIGN);

     printf("Enter your Project Grades Result: ");
     scanf("%lf", &PROJ);

     printf("Enter your Class Standing Grades Result: ");
     scanf("%lf", &CS);

     printf("Enter your Major Exams Result: ");
     scanf("%lf", &ME);



     system("cls");

      GRADE = (QUIZ*.15)+(ASSIGN*.15)+(PROJ*.20)+(CS*.10)+(ME*.40);
    {
    printf("Your GRADE is : %.2f \n\n", GRADE);
    }
   printf("-------------------------------\n");
   //if GRADE =97;
   char gender;
   int age;
   printf("Enter your gender M for Male and F for Female:");
   scanf(" %c", &gender);
   printf("Enter age: ");
   scanf(" %d", &age);

   if (gender=='M' || gender=='m' && age==21 ){
   printf("Happy Birthday");
   }
   else if(gender=='F' || gender=='f' && age==18){
    printf("Happy Birthday");
   }
   else
    printf("Invalid Gender");

   // ELSE IF STATEMENT
  //if(GRADE>=90)
       printf("Excellent!\n ");
 else if(GRADE>=85)
       printf("Very Good!\n");
 else if(GRADE>=80)
        printf("Good!\n");
 else if(GRADE>=75)
        printf("Fair!\n");
 else
        printf("Failed");
        printf("You are done");


       return 0;
}
