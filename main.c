#include<stdio.h>
#include<stdlib.h>
int main(){
    extern my_var;
    printMe();
    printf("%d",my_var);
    exit(0);
}