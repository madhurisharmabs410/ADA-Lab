#include <stdio.h>
int main()
{
	int n,a[10],i;
	int max;
	printf("Enter the size of a n number\n");
	scanf("%d",&n);
	printf("Enter the number\n");
	for(i=0;i<n;i++)
	{
			scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("The maximum number of n integer is %d\n",max);
	return max;
	
	
	
}
