/***6.Write a program to convert Celsius form of temperature into Fahrenheit and vice versa. **/

#include <stdio.h>
int main()
{
	//declaration of variables.
	float f,c;
	//Ask input from the user.
	scanf("%f",&c);
	//logic(formula) to convert celcius to fahrenheit.
	f=(c*9/5)+32;
	//logic(formula) to convert fahrenheit to celcius.
	c=(f-32)*5/9;
	//print the output celcius to fahrenheit.
	printf("Cel to FH %f\n",f);
	//print the output fahrenheit to celcius.
	printf("FH to Cel %f\n",c);
}
