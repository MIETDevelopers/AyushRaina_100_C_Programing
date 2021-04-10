
// Purpose: To find product ans sum of matrix
#define MAXROW		10
#define MAXCOL		10

int main()   // Start of Main body 
{
	int matrix[MAXROW][MAXCOL];
	int i,j,r,c;
	int sum,product;
	
	printf("Enter number of Rows :");   // Taking input 
	scanf("%d",&r);
	printf("Enter number of Cols :");   // Taking input 
	scanf("%d",&c);

	printf("\nEnter matrix elements :\n");  // asking user to enter element to search 
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			printf("Enter element [%d,%d] : ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	//Sum and product of all elements.
	//Initializing sun and product variables.
	sum		=0;
	product	=1;
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			sum		+=	matrix[i][j];
			product	*=	matrix[i][j];
		}
	
	}

	printf("\nSUM of all elements : %d \nProduct of all elements :%d",sum,product);
	return 0;	
} // End of Body
