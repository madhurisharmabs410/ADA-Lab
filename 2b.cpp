#include <iostream>
using namespace std;

int main()
{
	int a[10],n,i,j,temp,k;
	cout<<"Enter the size:";
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
		cout<<"Enter the key:";
		cin>>k;
	for(i=0;i<k-1;i++)
	{
		for(j=0;i<n-1-i;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=n-1;i>k;i--)
		cout<<a[i]<<"
