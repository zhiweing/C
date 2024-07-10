#include <stdio.h>


int main(){
    double Fahrenheit;
    double Celcius;
    printf("Please enter the temperature in degree Fahrenheit:");
    scanf("%lf",&Fahrenheit);
    Celcius=(Fahrenheit-32)/1.8;

    printf("%.2lf degree Fahrenheit equal to %.2lf degree Celcius",Fahrenheit,Celcius);
    //add some commands
    //my mistake add commands to test push
    return 0;


}