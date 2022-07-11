/*******2...Consider a character input from a user and print if it is a vowel or consonant. *********/
#include <stdio.h>
int main()
{
 char n;
 printf("enter the char");
 //give input from the user.
 scanf("%c",&n);
 //check if condition whether the alphabet vowel or consonant.
 if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U'||n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
 //if condition is true print vowel.
 printf("vowels");
 else
 // if condition is false print consonant.
 printf("consonants");
 return 0;
}
