#include <stdio.h>

int findroot(int x)
{
		if(x==0||x==1)
		   return x;
		
		int start=1,end=x,res;
		while(start<=end)
		{
			int mid=(start+end)/2;
		
			if(mid*mid==x)
				return mid;
				
			if (mid*mid < x){
			
				start=mid+1;
				res=mid;
			}
			else
				end=mid-1;
		}
		return res;
}
int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	int r=findroot(a);
	printf("root=%d",r);
	return 0;
}
