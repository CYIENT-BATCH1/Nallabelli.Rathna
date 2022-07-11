/*********5.5 balls are numbered with random 1-digit number each. Assign these numbers using user input. 
Print whether each ball is assigned odd or even number.************/
#include <stdio.h>
int main()
{
int num,i;
//to printing the num is even or odd using for loop. 
for(i=0;i<5;i++)
{
    //give input from the user.
    scanf("%d",&num);
    //condition for num is even or odd.
    if(num%2==0)
    printf("even");
    else
    printf("odd");
}
}
