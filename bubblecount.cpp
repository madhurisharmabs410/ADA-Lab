#include <iostream>
using namespace std;
int main()
{
	int a[100],n,j,i,temp,count=0;
	cout<<"enter the size\n";
	cin>>n;
	cout<<"enter the elements\n";
	for(i=0;i<n;i++)
		
		cin>>a[i];
	
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				count++;
				if (a[j+1]<a[j])
				{
					temp=a[j+1];
					a[j+1]=a[j];
					a[j]=temp;
				
				}
			}
		}
		
			cout<<"comparision"<<count;
			return 0;

}
