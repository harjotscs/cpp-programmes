#include<stdio.h>
int main()
{
	int i,j,n=0;
for(i=2; i<=100; i++)
	{
			n=0;
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				n++;
				break;
			}
		}
		if(n==0)
		{
			printf("%d  ",i);
		
		}
	}
}
