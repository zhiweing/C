#include <stdio.h>
int main()
{

/*     for (int i = 0; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;;
        }
        printf("%d ", i);
    } */

//-------------------------------------------------------------------------------------------------
 /*    int num;
    while (1)
    {
        printf("\n Enter a number:");
        scanf("%d",&num);
        if(num<0){
            break;
        }
        printf("Number: %d",num);
    } */
    
//-------------------------------------------------------------------------------------------------

/* 
    //when it is odd number skip this turn
    //when it is negative number,break the statement

    while (1)
    {
        int number;
        printf("\nEnter a number:");
        scanf("%d",&number);
        if (number<=0)
        {
            break;
        }

        if(number%2!=0){
            continue;
        }

        printf("%d",number);
        
    } */
    
//-------------------------------------------------------------------------------------------------

 /*    while (1)
    {   int num;
        printf("Enter a number:");
        scanf("%d",&num);
        if(num>=0){
            printf("Positive value\n");
            break;
        }

        else if(num<0 && num%2==0){
            printf("Negative even\n");
            continue;
            
        }else if(num<0 && num%2!=0)
        {
            printf("%d\n",num);
        }
    } */
    return 0;
}