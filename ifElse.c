#include <stdio.h>

int main()
{
    /*  printf("Pls enter two number: ");
     int num1;
     int num2;
     if(scanf("%d %d",&num1,&num2)!=2){
         printf("Invalid input for number.\n");
         return 1;
     }
     printf("\n Pls enter the operator: ");
     char op ;
     scanf(" %c", &op);

     switch (op)
     {
     double ans;
     case '+':
         ans=num1+num2;
         printf("%d %c %d = %.2lf", num1, op, num2,ans);
         break;

     case '-':
         ans=num1-num2;
         printf("%d %c %d = %.2lf",num1,op,num2,ans);
         break;

     default:
     printf("Invalid operator. Please use +,-,*,/");
         break;
     } */

    /*  int num;
     printf("Enter an integer:");
     scanf("%d",&num);
     while(num<0){
         printf("You entered %d.You are still in loop. Think some ways to get yourself out!",num);
         printf("\nEnter an integer again: ");
         scanf("%d",&num);
     }
     printf("\nCongratulations!"); */

    /* //check if it is an even number
    int num;
    printf("Enter an integer:");
    scanf("%d",&num);
    if(num%2==0){
         printf("\n%d is an even number",num);

    }else{
        printf("\n%d is an odd number",num);
    } */

 /*    // Compare two integers
    int num1, num2;
    printf("Enter two integer: ");
    if (scanf("%d %d", num1, num2) == 1)
    {
        if (num1 == num2)
        {
            printf("Number 1 eqaul to number 2!");
        }
        else if (num1 > num2)
        {
            printf("Number 1 is greater than number 2");
        }
        else
        {
            printf("Number 2 is greater than number 1!");
        }
    }else{
        printf("Invalid input!");
    } */

   //Write a function to determine if a student has passed or failed based on their score.

    int score;
    printf("Enter the student's score:");
    scanf("%d",&score);
    if(score>=50){
        printf("Pass");
    }else{
        printf("Fail");
    }
    return 0;
}