#include<iostream>
using namespace std;

int BFS(int adj[20][20],int k,int visited[20],int n)
{
	int q[20],f,r,w,v;
	f=0;
	r=-1;
	q[++r]=k;
	while(f<=r)
	{
		w=q[f++];
		for(v=1;v<=n;v++)
		{
			if(adj[w][v]==1 && visited[v]==0)
			{
				q[++r]=v;
				visited[v]=1;
				cout<<v;
			}
		}
	}
}

int main()
{
	int adj[20][20],i,j,n,k,visited[20];
	cout<<"enter the no. of nodes\n";
	cin>>n;
	cout<<"enter the adjacency matrix:\n";
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>adj[i][j];
	for(i=1;i<=n;i++)
		visited[i]=0;
	cout<<"enter the source vertex:\n";
	cin>>k;
	visited[k]=1;
	cout<<"the BFS order is: \n"<<k;
	BFS(adj,k,visited,n);
}
