#include<stdio.h>
int main()
{
	int arr[4][5];
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
	{
		arr[i][j]=10*i+j;
	}
	}
	printf("%d",*(arr[1]+14));
	return 0;
}