#include<stdio.h>
#define max 50
int arr[max],freq[max];
int i,j;
void FrequencyArray(int n);
void display(int arr[],int n);
int main()
{
	int n;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter n integers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
	printf("your array is:");
	display(arr,n);
	FrequencyArray(n);
	return 0;
}
void FrequencyArray(int n)
{
	int count;
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				freq[j]=0;
			}
		}
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
	}
	printf("\nfrequency of all elements in the array is:\n");
	for(i=0;i<n;i++)
	{
		if(freq[i]!=0)
		{
			printf("%d occurs %d times\n",arr[i],freq[i]);
		}
	}
}
void display(int arr[],int n)
{
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}	
}

