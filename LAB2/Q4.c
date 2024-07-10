#include <stdio.h>

int main(){
    int seconds;
    int hours;
    int second,min;
    printf("Enter the number of seconds:");
    scanf("%d",&seconds);

    hours=seconds/3600;
    min=(seconds%3600)/60;
    second=(seconds%3600)%60;

    printf("\n%d seconds is %d hours, %d minutes and %d seconds",seconds,hours,min,second);


    return 0;
}