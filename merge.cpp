include <iostream>
using namespace std;
int a[100];

//int Combine(int a[],int low,int mid,int high);
//void Split(int a[],int low,int high);

void Combine(int a[],int low,int mid,int high)
{
	int c[100],i,j,k;
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
			c[k++]=a[i++];
		else
			c[k++]=a[j++];
	}
	if(i>mid)
		while(j<=high)
		c[k++]=a[j++];
		
	if(j>high)
		while(i<=mid)
		c[k++]=a[i++];
	for(i=low;i<=high;i++)
		a[i]=c[i];
}

void Split(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		Split(a,low,mid);
		Split(a,mid+1,high);
		Combine(a,low,mid,high);
	}
}

int main()
{
	int i,n;
	cout<<"Enter the size";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
		cin>>a[i];
	Split(a,0,n);
	cout<<"Sorted elemets:";
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<< " ";
	}
	return 0;
}
 
