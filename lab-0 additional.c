#include <stdio.h>

int main()
{
	int n,key,a[100],i;
	printf("Enter the n number:\n");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be searched\n");
	scanf("%d",&n);
	if(a[i]==key)
	{
		printf("1\n");
		return 0;
	}
	printf("-1\n");
}
