#include <stdio.h>
#include <math.h>
int main(void)
{
	int t,i,j;
	printf("input a number:\n");
	scanf("%d",&t);
	j=(int)sqrt(t);
	for(i=2;i<=j;i++)
	{
		if(t%i==0)
		{
			break;
		}
	}
	if(i<j)
		printf("%d is not a prime.\n",t);
	else
		printf("%d is a prime.\n",t);
}
