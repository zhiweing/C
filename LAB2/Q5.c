#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int min=0;
    int max=10000;
    int num=(rand()%(max-min+1))+min;
    printf("Random number:%d\n",num);

    int sum=0;
    int a=num%10;
    int b=(num%100)/10;
    int c=(num%1000)/100;
    int d=(num%10000)/1000;
    
    sum=sum+a+b+c+d;
    printf("Sum of all digits in %d are %d\n",num,sum);
    
    return 0;
}