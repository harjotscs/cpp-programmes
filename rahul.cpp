#include<stdio.h>
int main()
{
	int a[50],l,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
		}
	}
	printf("%d",l);
}
