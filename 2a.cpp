#include <iostream>
using namespace std;

int main()
{
	int a[10],n,i,j,k,min,temp;
	cout<<"Enter the number:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
		cout<<"Enter the key:";
		cin>>k;
		for(i=0;i<k;i++)
		{
			min=i;
			for(j=i+1;j<n;j++)
			{
			if(a[j]<a[min])
				min=j;
			}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
		cout<<a[k-1]<<"\n";
		return 0;
			
}
