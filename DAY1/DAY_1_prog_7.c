/************7...Find whether a given 10-digit number is palindrome or not.  
(HINT: Any number is said to be a palindrome if the original number and the reverse of the original number are the same.)************/

#include<stdio.h>
int main()
{
        //Declare the variable as long int because we have to take 10 digit number.
	long int num=1211456788,r=0,temp=num;
	//loop condition for printig the palindrome number.
	while(num>0)
	{
		r=r*10+num%10;
		num=num/10;
	}
		//comparing given number and updated num to printing the reverse number.
		if(temp==r)
		//if condition is true then print "palindrome".
	        printf("palindrome");
		//if condition is false then print "not palindrome".
		else
			printf("not palindrome");
}
