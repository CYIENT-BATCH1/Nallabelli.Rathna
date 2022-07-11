 /***1 .Consider the phone number of a person as user input and find the sum of its digits.**/ 

#include <stdio.h>
#include <stdlib.h>
int main()
{
	//Declare the long integer variable because it is phone number having long integer values.  
	long int n,sum=0;
	//ask input from the user.
	scanf("%ld",&n);
	//Logic for printing the sum of phone number digits(having 10 integer values) by using while loop. 
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	//print the sum of 10 digits.
	printf("%ld",sum);
}
