#include<stdio.h>

int a,b,u,v,n,i,j,ne=1;
int visited[10]={0},min,mincost=0;
int cost[10][10];
int main()
{
	printf("Enter the number of nodes:");
	scanf("%d",&n);
	printf("Enter the adjacency matrix:");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
		visited[1]=1;
		printf("\n");
		while(ne<n)
		{
			for(i=1,min=999;i<=n;i++)
				for(j=1;j<=n;j++)
					if(cost[i][j]<min)
					{
						min=cost[i][j];
						a=i;
						b=j;
					}
					if(visited[a]==0||visited[b]==0)
					{
					printf("Edge %d:(%d,%d)distance: %d\n",ne++,a,b,min);
						mincost+=min;
						visited[b]=1;
					}
					cost[a][b]=cost[b][a]=999;
	
		}
		printf("Minimum distance=%d\n",mincost);
		return 0;
}
