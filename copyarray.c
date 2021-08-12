#include<stdio.h>
#define S 4
void copy(int c[])
{
	int i;
	int b[S];
	for(i=0;i<S;i++)
	{
		b[i]= c[i];
	}
	for(i=0;i<S;i++)
	{
		printf("%d ",b[i]);
	}
}
int main()
{
	int a[S];
	int i;
	for(i=0;i<S;i++)
	{
		scanf("%d ",&a[i]);
	}
	copy(a);
	return 0;
}
