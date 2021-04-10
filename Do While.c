//Purpose: To demonstrate do while program
#include <stdio.h>//Preprocessor directive to include standard input output header file
int main()
{//start of main function body
	int j=0;    //initializing the variable
	do          //do-while loop 
	{
		printf("Value of variable j is: %d\n", j);
		j++;        //incrementing operation
	}while (j<=3);
	return 0;
} //end of main function body
