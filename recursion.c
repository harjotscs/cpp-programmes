#include<stdio.h>
int h(int a)
{
	if (a<=1)
	return 1;
	else
return (a+h(a-1));
}
int main()
{
	int x,n;
	scanf("%d",&x);
	n=h(x);
	printf("%d",n);
}
