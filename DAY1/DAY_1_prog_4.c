/*********4...Take a 6-digit number as input from the user and reverse the number.
 Make sure that the number does not include a ‘0’ in any of its digits.*********/
#include <stdio.h>
int main()
{
int num,temp=0;
printf("eneter the num");
//give 6 digit input from the user.
scanf("%d",&num);
//condition for printing the num into reverse number and does not include 0.
while(num>0)
{
    temp=temp*10+num%10;
    num=num/10;
}
//print reverse number.
printf("reverse the num %d",temp);
}
