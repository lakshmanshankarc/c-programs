#include<stdio.h>

#define mac "We win"
// #undef mac


//Conditional Macros
#if (10>31)

#define Apple 12

#else

#define Apple 23

#endif



//factorial
int factorial(int num){
    int fac=1;
    for(int i=1;i<=num;i++){
        fac=i*fac;
    }
    return fac;
}
//Macro functions
#define Sq(x) (x*x)
#define fact(x) factorial(x)

// #undef A  /*undefines the macros*/

int main(){ 
// printf("%d",Apple);
// printf("%d",Sq(2));
// printf("%d",fact(7));

  return 0;
 }

/** Macros can be of anything it can be functions if else statements etc**/