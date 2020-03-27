#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("After Swap a=%d\tb=%d",a,b);
}
