/*****3....The entire area of a circular garden is to be covered with grass by a Gardener. The radius of the garden is given by the user input. Calculate the area that has to be covered.***/
#include <stdio.h>

int main()
{
        float r,n;
        printf("enter the value");
        //give input from the user.
        scanf("%f",&r);
        //Logic to find the area of circle.
        n=3.14*r*r;
        printf("%f",n);
        return 0;
}
