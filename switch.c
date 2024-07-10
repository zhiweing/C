#include <stdio.h>
int main()
{
    /*   int number;
      printf("\nEnter a number between 1 to 7:");
      scanf("%d",&number);


      switch (number)
      {
      case 1:
          printf("Monday");
          break;
      case 2:
          printf("Tuesday");
          break;
      case 3:
          printf("Wednesday");
          break;
      case 4:
          printf("Thursday\n");
          break;

      case 5:
          printf("Friday\n");
          break;

      case 6:
          printf("Saturday\n");
          break;
      case 7:
          printf("Sunday\n");
          break;
      default:
          printf("Invalid number\n");
          break;
      } */
    //-------------------------------------------------------------------------------------------------
    /*   int number;
      printf("Enter a number between 1 to 7:");
      scanf("%d", &number);

      switch (number)
      {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
          printf("weekday");
          break;

      case 6:
      case 7:
          printf("weekend");
          break;
      default:
          printf("Invalid number");
      } */
    //-------------------------------------------------------------------------------------------------

    // Simple calculator
    char operator;
    printf("Choose an operator [+,-,*,/]:");
    scanf("%c", &operator);

    if (operator!= '+' || operator!= '-' || operator!= '*' || operator!= '/')
    {
        printf("Invalid operator");
        return 1; // exit the program
    }

    double num1, num2, result = 0;

    printf("Enter first number:");
    scanf("%lf", &num1);

    printf("Enter second number:");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%.2lf %c %.2lf =%.2lf", num1, operator, num2, result);

        break;

    case '-':
        result = num1 - num2;
        printf("%.2lf %c %.2lf =%.2lf", num1, operator, num2, result);

        break;

    case '*':
        result = num1 * num2;
        printf("%.2lf %c %.2lf =%.2lf", num1, operator, num2, result);

        break;

    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%.2lf %c %.2lf =%.2lf", num1, operator, num2, result);
        }
        else
        {
            printf("Error: Division by zero is not allowed");
        }

        break;

    default:
        printf("Invalid operator");
        break;
    }

    return 0;
}