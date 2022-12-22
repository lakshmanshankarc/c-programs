#include<stdio.h>

int swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

int morePointers(int a,int *a){
    printf("%d Normal %d pointer %d address",a,*a,&a);
}

int main(){
    int a=10,b=20;
    // printf("Before [%d a and %d is b]",a,b);
    // swap(&a,&b);
    // printf("After [%d a and %d is b]",a,b);

    morePointers(b,&a);
}


