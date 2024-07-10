#include <stdio.h>
#include <stdbool.h>

int main(){
    bool value1=true;
    bool value2=false;

    printf("Value 1:%d\n",value1);
    printf("Value 2:%d\n",value2);
    
    bool value=(12>9);
    bool value3=(6!=6);
    bool cmp=(3>6)&&(4>1);
    printf("%d\n",cmp);
    printf("%d\n",value);
    printf("%d\n",value3);
    return 0;
}