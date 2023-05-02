	#include<stdio.h>
void main()
{
	int a[20],b[20],n,i;
	printf("Enter the size of an array :");
	scanf("%d",&n);
	printf("Enter the array elements :\n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] element :",i);
		scanf("%d",&a[i]);
	}
	printf("Array elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d ",i,a[i]);
	}
	printf("\n");
	printf("After copying the array elements :\n");
	for(i=0;i<n;i++)
	{
		b[i] =  a[i];
		printf("b[%d] = %d ",i,b[i]);
	}
}
