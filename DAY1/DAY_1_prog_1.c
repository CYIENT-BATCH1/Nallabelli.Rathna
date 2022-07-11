/*******1....We'll say a number is special if it is a multiple of 11 or if it is one more than a multiple of 11. Print “SPECIAL” if the given non-negative number is special.
 Use the % "mod" operator.******/
#include <stdio.h>

int main()
{
    int n;
    //give input from the user.
    printf("enter the num =");
    scanf("%d",&n);
    //Logic for the 11 is multiple or not if it is true num is special if not true num is not special.
    (n%11==0)?printf("SPECIAL"):printf("NOT SPECIAL");
    return 0;
}
