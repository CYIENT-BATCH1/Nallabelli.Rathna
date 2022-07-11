/********9...Implement basic logic gates using C (AND, OR, NOT). Consider the inputs: 0,0

   			                                                          0,1

  			                                                          1,0

   			                                                          1,1. ***********/
#include <stdio.h>
int main()
{
 int x,y,z,z1,z2;
 //give input from the user.
 scanf("%d",&x);
 scanf("%d",&y);
 //Logic for AND.
 z=x&&y;
 //Logic for OR.
 z1=x||y;
 //Logic for NOT.
 z2=!x;
 //print values z,z1,z2(AND,OR,NOT).
 printf("z = %d\t z1 = %d\t  z3 = %d",z,z1,z2);
 return 0;
}
