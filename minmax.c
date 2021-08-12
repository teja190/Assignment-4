
#include <stdio.h>
void quick_sort(int[],int,int);
int partition(int[],int,int);
 
int main()
{
	int a[30],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]); 
	}
	quick_sort(a,0,n-1);
	printf("\nArray after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nMax number:%d\n",a[n-1]);
	printf("Min number:%d\n",a[0]);
	return 0;
}
 
void quick_sort(int a[],int s,int e)
{
	int j;
	if(s<e)
	{
	j=partition(a,s,e);
	quick_sort(a,s,j-1);
	quick_sort(a,j+1,e);
	}
}
 
int partition(int a[],int s,int e)
{
	int p,i,j,temp;
	p=a[s];
	i=s;
	j=e;
	while(i<j)
	{
		while(a[i]<=p)
		{
		i++;
		}
		while(a[j]>p)
		{
			j--;
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	a[s]=a[j];
	a[j]=p;
	return j;
}

