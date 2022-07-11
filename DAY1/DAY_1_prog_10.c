/*******10...Consider the weights of three people as user input. Find the heaviest among them and print it.***********/

#include <stdio.h>
int main()
{
	int a,b,c;
	//Give input from the user.
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	//Logic for printing the greater number from 3 number.
	a>b&&a>c?printf("a is larger"):b>a&&b>c?printf("b is larger"):printf("c is greater");
}
