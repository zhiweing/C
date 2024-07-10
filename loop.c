#include <stdio.h>
#include <math.h>

int main()
{

    /* //initialization statement, test expression  ,update statement
    int i;
    for(i=1;i<=10;i++){
        printf("%d ",i );
    } */

    /* //Program to calculate the sum of first n natural number
    int n,count,sum=0;
    printf("Enter an integer:");
    scanf("%d",&n);

    for(count=1;count<=n;count++){
        sum+=count;
    }

    printf("Sum= %d",sum); */

    /*    // while loop will evaluate the expression inside the parathenses
       double number, sum = 0;
       printf("Summation of number: (press 0 to stop)\n");
       do
       {
           printf("Enter a number:");
           scanf("%lf", &number);
           sum += number;
       } while (number != 0);
       printf("Sum: %.2lf",sum);
       return 0; */

    // basic calculator

    double num, sum = 0;
    char op;
    while (1)
    {
        printf("Enter the number, 0 to stop:\n");
        if
            (scanf(" %lf", &num)!=1){
            printf("Invalid input.Pls enter a number.\n");
            while(getchar()!="\n");
             continue;
        }

        if(num==0){
            break;
        }
        printf("Enter operator[+,-,*,/,^]:\n");
        scanf(" %c", &op);

        switch (op)
        {
        case '+':
            sum += num;
            break;

        case '-':
            sum -= num;
            break;

        case '*':
            sum *= num;
            break;

        case '/':
            sum /= num;
            break;

        case '^':
            sum = pow(sum, num);
            break;
        default:
            printf("Invalid operator!");
        }
        printf("\nCurrent Sum: %.2lf\n",sum);
    } 

    printf("Ans= %.2f", sum);
}
