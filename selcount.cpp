#include<iostream>
using namespace std;
int main()
{
	int a[100],n,min,temp,i,j,count=0;
	cout<<"enter the number";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		count++:

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
	
	cout<<"comparision"<<count;
	return 0;
	
}
