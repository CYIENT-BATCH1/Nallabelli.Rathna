/***5.A message is encoded in the form of numbers and sent to you. Write a program to decode the message. (HINT: A=1, B=2, … so on)**/ 

#include <stdio.h>
int main()
{
	//declaration of variable.
	char n;
	//Ask the input from the user.
	scanf("%c",&n);
	//logic to convert encoded message to decoded message.
	int l=n%64;
	//printing the decoded message.
	printf("%d\n",l);
}
