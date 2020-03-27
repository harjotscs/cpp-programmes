#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a,nx,n,m,i,s=0;
    scanf("%d",&nx);
    scanf("%d",&a);
  /*  for(i=1;i<nx;i++)
    {
    	
    	while(n>0)
{
	m=n%10;
	n=n/10;
	s=m;

    	if(s!=4)
    	{
    		printf("Case #i: %d %d",a/2,a/2);
		}
		else 
        {
        	printf("Case #i: %d %d",s+1,s-1);
		}
  }      
    }*/
    s=a/2;
    if(a==4)
    {
    	printf("Case #i: %d %d",s+1,s-1);
	}
}
