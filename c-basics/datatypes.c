#include<stdio.h>
#include<stdlib.h>

#define LAKS 10
//this.function returns power for the given inputs


// ! Enums
enum name{SHA=2,RSA,AES,SALT,DES};

int main()
{

    //conversion
    int cel;
    printf("Enter the Number in celsius");
    scanf("%d",&cel);
    printf("%d \n",((cel*18)-32));

    //Average
     int size;
     printf("Enter number of subjects");
     scanf("%d",&size);
     int sum=0;
     for (int i = 0; i < size; i++)
     {
         int mark;
         printf("enter mark of subject [%d]",i);
         scanf("%d",&mark);
         sum+=mark;
     }
     printf("%d is Your Average \n",(sum/size));

    //looping and control statements are same as python and javascript

    //Multiple Ways of declaring Variables 
     int x=5,y=10,z=10;
     printf("%d %d %d \n",x,y,z);
     int a,b,c;
     a=b=c=5;
     printf("%d %d %i \n",a,b,c);
  
    // //Constant Variable
    // const int ALPHA=120;
    // printf("%d %d Both are constants",ALPHA,LAKS);


    // //Predefined Constants
    // printf("%s",__TIME__);
    // data_type_of_int();
    // otherDataTypes();
    // ADT();
    // ownDataTypes();
    // incrementOrDecrement();
    return 0;
}

// Primary data types
void data_type_of_int(){
    int a=10;                           //2,147,483,648 to 2,147,483,648
    short int a1=10;                    //-32768 to 32767
    signed short int a2=10;             //Un signed starts from 0 obey %
    printf("%d int %d short int \n",sizeof(a),sizeof(a1));
    printf("%d signed short int %d unsigned short int \n",sizeof(a2),sizeof(unsigned short int));
    printf("%d sizeof long %d and long int %d \n",sizeof(long),sizeof(long int));
}

//Other data types

void otherDataTypes(){
    printf("%d char \n",sizeof(char));
    printf("short %d and unsigned short %d \n",sizeof(short),sizeof(unsigned short));
    printf("float %d and double %d \n",sizeof(float),sizeof(double));
    printf("Long double  %d",sizeof(float),sizeof(long double));
}


void ADT(){
    // Constant Expression;
    printf("%d SHA \n",DES);
    //Type Conversion

    //Implicit Convertion
    int a=10;
    double b=10.123;
    printf("%f implicit conversion  \n",a+b);


    //Explicit Conversions
    printf("%d Ex-licit Coversion \n",(double) a+b);

    //functions 
    char week[]="123.23";
    printf("%d \n",atoi(week));
    printf("%f",atof(week));
}


void ownDataTypes(){
    // We Can use the typedef key word to create our own data types 
    // typedef int c; you can use c instead of int;
    typedef int pine;
    pine a=10;
    printf("%d",a);
}

void incrementOrDecrement(){
    int a=10,b=10;
    //Pre Increment
    printf("%d \n",a);      //10
    printf("%d \n",++a);    //11
    printf("%d \n",a);      //11

    //Post Increment
    printf("%d \n",b);      //10
    printf("%d \n",b++);    //10
    printf("%d \n",b);      //11
}



/*
Primitives                  Derived                     user Defined
char  1 Bytes               Array                       Struct
short 2 Byte                String                      union
int   4 Bytes               pointers                    enum
long  4 Bytes               Refernce                    typedef
floar $ Bytes
double 8 Bytes  
void //No return
! Unsigned startiing from 0
short int (2)->(-32768 327678)
unsigned short int (2)-> (0-65535()
unsigned int(4) -> (0-4294967295)
int (4)-> (-2147483648 2147483647)
long int (4)-> (-2147483648 2147483647) 

long double(16 bytes)
more..

*/


//! KeyWords u C
