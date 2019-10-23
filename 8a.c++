#include <iostream>

using namespace std;
int main()
{
	int i,N,arr[20],ele,s,f;
	cout<<"enter the number of elemnts";
	cin>>N;
	cout<<"Enter elments";
	for(int i=1;i<=N;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<=N/2;i++)
	{
		f=1;
		ele=arr[f];
		s=2*f;
		if(s<N)
		{
			if(arr[s]<ele && arr[s+1]<ele)
					continue;
			else
			{
				cout<<"False it does not satisfy the max heap condition\n";
					return 0;
			}
		}
		if(s<=N)
		{
			if(arr[s]<ele)
				continue;
			else
			{
				cout<<"False it does not satisfy the max heap condition\n";
				return 0;
			}
		}
	}
	cout<<"True it satisfies max heap property\n";
	return 0;
}
