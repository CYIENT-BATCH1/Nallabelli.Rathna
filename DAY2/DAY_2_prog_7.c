/**7. Find the number of leap years in the interval 1990-2022.**/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	//declaration of variables.
	int year=1990,count=0;
	//logic to check the present year is greater than 1990(given year).
	while(year<=2022)
	{
		//condition to find the leap years in between given(1990)year and the present year.
		if(year%4==0)
		{
			//if found the leap year then increment the count.
			count++;
		}
		//if condition is false then increment the year.
		year++;
	}
	//print how many leap years in between 1990 to 2022(present year).
	printf("%d",count);
}
