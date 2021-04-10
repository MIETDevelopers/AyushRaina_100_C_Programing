// Purpose:a function which takes 3 numbers as input and prints maximum of those 3 numbers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, result, max;
	// if x is greater than both y and z, x is the largest
    printf("\nInput the first integer: "); 
    scanf("%d", &x);
	// if y is greater than both x and z, y is the largest
    printf("\nInput the second integer: ");
    scanf("%d", &y);
	// if z is greater than both y and x, z is the largest
    printf("\nInput the third integer: ");
    scanf("%d", &z);
    result=(x+y+abs(x-y))/2;
    max=(result+z+abs(result-z))/2;
    printf("\nMaximum value of three integers: %d", max);
	printf("\n");
    return 0;
}
 
