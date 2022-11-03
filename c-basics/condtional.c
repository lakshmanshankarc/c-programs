#include<stdio.h>


void conditionals(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is even");
    }else
    {
        printf("Not even");
    }

    // or (ternary operator)
    //condition ? expression1 : expression2
    (n%2) ? printf("odd") : printf("even");
}


void breaking(){
    int i,k=0,n=10;
    
    printf("\n Break Statement ]\n");
    for (i = 0; i < n; i++)
    {
        printf("%d",i);
        if (i==5)
        {
            break;
        }
    }
    

    printf("\nContinue \n");
    //continue
    for (i = 0; i < n; i++)
    {
        if (i<=5)
        {
            continue;
        }
        printf("%d",i);
    }
}
int main(){
    // conditionals();
    breaking();
}