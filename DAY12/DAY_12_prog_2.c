/*****2.Find empty strings in an array of strings (Array of strings will be given as input to program) and print the position of array where empty string is present. 
And replace the empty string array element as “CYIENT”
Switch status valueMeaning
00Fault type 1 in switch
01switch is buckle
10switch is unbuckle
11Fault type 2 in switch********/

#include <stdio.h>
int main()
{
 char *a[]={"cat","dog","fox","rat"," ","frog"};//Declaration of array.
 int size=sizeof a/sizeof(a[0]);//find the size of array.
 int pos=0;//position starts from zero.
 printf("%d\n",size);//print size.
 int i;
 //checking for the empty string using for loop.
 for(i=0;i<6;i++){
 //printf("\n");
 if(a[i]==" ")//if string is equal to empty string print CYIENT.
 {
a[i]="CYIENT\n";
pos=i;
 printf("%s",*(a+i));//print CYIENT in empty string.
 }
 }
printf("pos=%d\n",pos);//print the string "CYIENT" position.
 return 0;
}
