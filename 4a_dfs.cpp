#include<iostream>
using namespace std;
int adjacent[10][10],M,visited[10];
void dfs(int v)
{

	int i;
	cout<<v<<" ";
	visited[v]=1;
	for(i=0;i<M;i++)
	{
		if(adjacent[v][i]==1 && visited[i]==0)
			dfs(i);
	}
}
int main()
{
	int i,j;
	cout<<"Enter the nodes\n";
	cin>>M;
	cout<<"Enter the adjacency matrix\n";
	for(i=0;i<M;i++)
		for(j=0;j<M;j++)
			cin>>adjacent[i][j];
			
	for(i=0;i<M;i++)
		visited[i]=0;
	for(j=0;j<M;j++)
		if(visited[j]==0)
		{
			dfs(j);
			cout<<"\n";
		}
		return 0;
		
}
