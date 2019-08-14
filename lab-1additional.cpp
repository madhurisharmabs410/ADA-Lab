#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,x,first=-1,last=-1,count,low,mid,high,key,interval;
	
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    cin>>key;
    low=0;
    high=n-1;
    while(low<=high){
        mid=((low+high)/2);
        if((mid==0 || key>a[mid-1]) && a[mid]==key){
            first=mid;
            break;
        }else if(key<=a[mid]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    low=0;
    high=n-1;
    while(low<=high){
        mid=((low+high)/2);
        if((mid==n-1 || key<a[mid+1]) && a[mid]==key){
            last=mid;
            break;
        }else if(key>=a[mid]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    if(first>-1 && last>-1){
        interval = last-first+1;
        cout<<first<<" "<<last<<" "<<interval<<"\n";
    }else{
        cout<<-1<<" "<<-1<<" "<<0<<"\n";
    }
    return 0;
}
