/*****(K) SIZEOF OPERATOR 

(1) FINDOUT SIZE FOR ALL DATATYPES AND VARIABLES***********/

#include<stdio.h>
int main()
{
    //declare the variables(int,float,char,double).
    int a;
    float b;
    char c;
    double d;
    printf("Size of int: %d bytes \n", sizeof(a));//printing the sizeof int.
    printf("Size of float: %d bytes \n", sizeof(b));//printing the sizeof float.
    printf("Size of char: %d bytes \n", sizeof(c));//printing the sizeof char.
    printf("Size of double: %d bytes", sizeof(d));//printing the sizeof double.
}
