/*   Multiline Commenting

        *
       * *
      * * *
     * * * *
    * * * * *    */
#include<stdio.h>
int main ()
{
	int n;
	printf ("Enter the no of elements\n");
	scanf ("%d",&n);
	int row,col,space;
	
	for (row=1;row<=n;row++)
	{	
		if (row!=n)
		{
			for (space =n-row;space>0;space--)
			{
				printf (" ");
				
			}
		}
		
		
		
		for (col=row;col>0;col--)
		
		{
			printf ("1 ");
		}
	
		printf ("\n");
	
	
	}	
	
	
	
	
	
	return 0;
}
