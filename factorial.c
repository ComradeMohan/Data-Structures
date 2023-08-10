#include<stdio.h>
int main()
{
	int n,f=1,i;
	printf("enter number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	printf("factorial=%d",n,f);
	return 0;
}
