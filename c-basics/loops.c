#include<stdio.h>

void cloops(){
    int n,i=0,j=0,k=0;
    printf("Enter  Number for multiplication table");
    scanf("%d",&n);

    printf("\n \t \tMultiplication table");
    //do while
    do
    {
       printf("%d * %d = %d \n",i,n,(n*i));
       i+=1;
    } while (i<=10);


    //While loop
    printf("\n \t\t Addition Table \n");
    while (j<=10)
    {
        printf("%d + %d = %d \n",j,n,(n+j));
       j+=1;
    }


    printf("\n \t \t Subraction Table \n");
    //for loop
    for (k=0;k <= 10; k++)
    {
        printf("%d - %d = %d \n",k,n,(n-k));
    }
}


int main(){
    cloops();
    return 0;
}