#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* int randomNumberGenerator(int min,int max){
    return (rand()%(max-min+1))+min;
}
 */

//-------------------------------------------------------------------------------------------------
int main()
{
    /* //generate random number between 1 to 100
    // Seed the random number generator with the current time
        srand(time(0)); */

    /* int min=1;
    int max=100;

    int randomNum=randomNumberGenerator(min,max);
    printf("Random number generate between %d and %d are %d",min,max,randomNum);
 */

    //-------------------------------------------------------------------------------------------------
    // generate 10 random number between 1 to 50
    int num[10];
    srand(time(0));
    for (int j = 0; j < 10; j++)
    {
        num[j] = (rand() % (50 - 1+1)+1);
        printf("Random number %d: %d\n", j+1, num[j]);
    }

    //-------------------------------------------------------------------------------------------------
    return 0;
}