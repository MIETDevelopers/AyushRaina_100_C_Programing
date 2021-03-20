//Purpose: Program to find Area and Perimeter of Circle, Square and Rectangle.

#include<stdio.h>//preprocessor directive to include standard input output function header file
int main()
{//main function body starts
	
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;//variable declaration
	raduisOfCircle = 3,sideOfSquare = 6,legthOfRectangle = 9,breadthOfRectangle =12;//value assignment
	
	printf("Area of Circle: %f",(3.14*raduisOfCircle*raduisOfCircle));//printf statement for printing area of circle(output)
	
	printf("\nPerimeter of Circle: %f",(2*3.14*raduisOfCircle));//printf statement for printing perimeter of circle(output)
	
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));//printf statement for printing area of square(output)
	
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));//printf statement for printing perimeter of square(output)
	

	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));//printf statement for printing area of rectangle(output)
	
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));//printf statement for printing perimeter of rectangle(output)
	
	return 0;//return statement
}//main function body ends
