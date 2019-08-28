#include <iostream>
using namespace std;

int partition(int a[10],int low,int high)
{
    int pivot=a[low];
    int i=(low+1);
    int j=high;
    while(1)
    {
        while(a[i]<=pivot && i<=high)
        {
            i++;
        }
        while(a[j]>pivot && j>=low)
        {
            j--;
        }
        if(i<j)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else
        {
            a[low]=a[j];
            a[j]=pivot;
            return j;
        }
    }
}
void Quick(int a[10],int low,int high)
{

    if(low<high)
    {
        int pivot_pos = partition(a,low,high);
        Quick(a,low,pivot_pos-1);
        Quick(a,pivot_pos+1,high);
    }
}
int main()
{
	int a[10],n,i;
	cout<<"Enter the size:\n";
	cin>>n;
	cout<<"Enter the elements:\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	Quick(a,0,n-1);
	cout<<"After sorting:\n";
	for(i=0;i<n;i++)
    {

        cout<<a[i]<<"  ";
    }
	return 0;

}
