#include <stdio.h>
int main(void)
#define l 2
#define r 3
{
	int arr[l][r],i,j,arrr[r][l];
	for(i=0;i<=l-1;i++)
		{
		for(j=0;j<=r-1;j++)
		scanf("%d",&arr[i][j]);              /*two ways to input*/
		//arr[i][j]=i*r+j+1;                   
		}
	printf("the array is:\n");				/*show the array*/
	for(i=0;i<=l-1;i++)
	{
		{
		for(j=0;j<=r-1;j++)
		printf("%-8d",arr[i][j]);
		}
	printf("\n");
	}
	for(i=0;i<=l-1;i++)						/*reversing*/
	{
		{
		for(j=0;j<=r-1;j++)
			arrr[j][i]=arr[i][j];
		}
	}
	printf("the reversed array is:\n");		/*show the reversed array*/
	for(i=0;i<=r-1;i++)
	{
		{
		for(j=0;j<=l-1;j++)
		printf("%-8d",arrr[i][j]);
		}
	printf("\n");
	}

}