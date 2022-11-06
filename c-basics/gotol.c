#include<stdio.h>

int main(){
    int a=0,i;
    goto incrementor;  
    incrementor:
        i+=1;
        printf("Incremented \n");
    if (i>=10)
    {
        printf("%d incremented value is",i);
    }
    else{
        goto incrementor;  
    }
    return 0;
}