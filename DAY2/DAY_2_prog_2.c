/**2.A message ID is required to send data via CAN communication between ECU’s. Accept a random 2-digit message ID from the user to send data. 
Keep in mind that the given ECU only accepts binary form of the message ID. Write a program to convert the 2-digit ID to binary form.***/ 

#include <stdio.h>
int main()
{
        //declaration of variables.
	int n,x,i;
	//ask n value from the user.
	scanf("%d",&n);
	//Logic for printng the 2 digit ID to binary form.
	for(i=7;i>=0;i--)
	{
		x=(n>>i)&1;
		//print the output for 2 digit ID to binary form. 
		printf("%d",x);
	}
}
