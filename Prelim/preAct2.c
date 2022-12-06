//JOSHUA U. MEREDORES
//BSIT 1F

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    char name[50];
    char contact[50];
    char birthdy[50];
    char address[50];
    char email[50];
    char citi[50];
    char father[50];
    char mother[50];
    char course1[50];
    char course2[20];
    char course3[20];
    char prim[50];
    char sec[50];
    char ter[50];



 //Personal information

    printf("<--------------------------Registration Form------------------------>\n");
    printf("\n");

        printf("Enter your fullname : ");
            scanf("%[^\n]",name);

        printf("Enter your age : ");
            scanf("%i",&age);

        printf("Enter your birthday : ");
            scanf("%s",birthdy);

        printf("Enter your address : ");
            scanf("%s",address);

        printf("Enter your contact no. :");
            scanf("%s",contact);

        printf("Enter  your email : ");
            scanf("%s",email);

        printf("Enter your citizenship : ");
           scanf("%s",citi);

        printf("What is your Father's name : ");
            scanf("%s",father);

         printf("What is your Mother's name : ");
            scanf("%s",mother);



//For Education

          printf("\n");
         printf("<--------------------------EDUCATIONAL ATTAINMENT------------------------>\n");
          printf("\n");

                printf("PRIMARY :");
                   scanf("%s",prim);

                printf("SECONDARY :");
                   scanf("%s",sec);

                printf("TERTIARY :");
                   scanf("%s",ter);



//For College

          printf("\n");
        printf("<----------------------COURSE CHOICE---------------------->\n");
          printf("\n");

                printf("1st Choice :");
                   scanf("%s",course1);

                printf("2st Choice :");
                   scanf("%s",course2);

                printf("3st Choice :");
                   scanf("%s",course3);


     system("cls");

         printf("\n");
         printf("<--------------------------Registration Form------------------------>\n");
         printf("\n");


             printf("Your name is          : %s \n",name);
    printf("\n");
              printf("Your age is           : %i \n",age);
    printf("\n");
              printf("Your birthday is :%s \n",birthdy);
    printf("\n");
              printf("Your address is       : %s \n",address);
    printf("\n");
              printf("Your contact no. is   : %s \n",contact);
    printf("\n");
              printf("Your email is         : %s \n",email);
    printf("\n");
              printf("Your citizenship is   : %s \n",citi);
    printf("\n");
              printf("Your Father's name is : %s \n",father);
    printf("\n");
              printf("Your Mother's name is : %s \n",mother);


    printf("\n");
    printf("<----------------------EDUCATIONAL ATTAINMENT---------------------->\n");
    printf("\n");


               printf("PRIMARY :  %s \n ",prim);
               printf("SECONDARY :  %s \n ",sec);
               printf("TERTIARY :  %s \n ",ter);


    printf("\n");
    printf("<----------------------COURSE CHOICE---------------------->\n");
    printf("\n");

               printf("1st Choice : %s \n",course1);
               printf("2st Choice : %s \n",course2);
               printf("3st Choice : %s \n",course3);


        return 0;
}
