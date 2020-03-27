#include<stdio.h>
int main()
{
	int *p,s,i;
	int a[5],n;
	printf("enter total no. of elements");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
		*p=a;
		for(i=0;i<n;i++)
		{
			s=s+*(p+i);
		}
		printf("%d",s);
}
