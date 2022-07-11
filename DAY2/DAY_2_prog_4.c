/***4.Kishore bought ‘n’ number of lottery tickets. His lucky number is 3 so he wants to separate all the tickets that have the number 3 in them. 
Find how many such lucky tickets are found in the ‘n’ number of tickets purchased by Kishore.***/

#include <stdio.h>
int main()
{
	//Declaration
	//Take an array for 'n' no.of tickets.
	int a[]={1,3,4,5,6,3,3,6,3,3,3};
	//finding the size of an array.
	int n=sizeof(a)/sizeof(a[0]);
	int i,count=0;
	//Logic to check where the lucky number 3
	for(i=0;i<n;i++)
	{
		if(a[i]==3)
			//if number is found then to find how many 3's are there.. using this increment operator.
			count++;
	}
	//print how many tickets found in those ticket,(where the 3 is found).
	printf("%d",count);
}
