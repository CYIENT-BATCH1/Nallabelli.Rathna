/***3.It was Raj's first day at school. His teacher asked the students to meet every other student in the class and to introduce themselves. 
The teacher asked them to give handshakes when they meet each other. 
If there are ‘n’ number of students in the class then find the total number of handshakes made by the students.*****/ 

#include <stdio.h>
#include <stdlib.h>
int main()
{
//declaration of variables.
int n,x;
//ask input from the user.
scanf("%d",&n);
//Logic for printing the no.of handshakes made by the students.
x=n*(n-1);
//Printing the no.of handshakes.
printf("%d",x);
}
