
#include <bits/stdc++.h> 
using namespace std; 
  

#define UNASSIGNED 0  
  

#define N 4 
  

bool FindUnassignedLocation(int grid[N][N],  
                            int &row, int &col);  
  

bool isSafe(int grid[N][N], int row, 
                   int col, int num);  
  

bool SolveSudoku(int grid[N][N])  
{  
    int row, col;  
  
   
    if (!FindUnassignedLocation(grid, row, col))  
    return true; 
  
    
    for (int num = 1; num <= 4; num++)  
    {  
       
        if (isSafe(grid, row, col, num))  
        {  
            
            grid[row][col] = num;  
  
            
            if (SolveSudoku(grid))  
                return true;  
				 grid[row][col] = UNASSIGNED;  
        }  
    }  
    return false; 
}  
  

bool FindUnassignedLocation(int grid[N][N],  
                            int &row, int &col)  
{  
    for (row = 0; row < N; row++)  
        for (col = 0; col < N; col++)  
            if (grid[row][col] == UNASSIGNED)  
                return true;  
    return false;  
}  
  

bool UsedInRow(int grid[N][N], int row, int num)  
{  
    for (int col = 0; col < N; col++)  
        if (grid[row][col] == num)  
            return true;  
    return false;  
}  
  

bool UsedInCol(int grid[N][N], int col, int num)  
{  
    for (int row = 0; row < N; row++)  
        if (grid[row][col] == num)  
            return true;  
    return false;  //12:55:55: INFO: Retag workspace completed in 0 seconds (No files were retagged)

}  
  

bool UsedInBox(int grid[N][N], int boxStartRow, 
               int boxStartCol, int num)  
{  
    for (int row = 0; row < 2; row++)  
        for (int col = 0; col < 2; col++)  
            if (grid[row + boxStartRow] 
                    [col + boxStartCol] == num)  
                return true;  
    return false;  
}  
  

bool isSafe(int grid[N][N], int row,  
                   int col, int num)  
{  
  
    return !UsedInRow(grid, row, num) &&  
           !UsedInCol(grid, col, num) &&  
           !UsedInBox(grid, row - row % 2 ,  
                      col - col % 2, num) &&  
            grid[row][col] == UNASSIGNED;  
}  
  

void printGrid(int grid[N][N])  
{  
    for (int row = 0; row < N; row++)  
    {  
    for (int col = 0; col < N; col++)  
            cout << grid[row][col] << " ";  
        cout << endl; 
    }  
}  
  

int main()  
{  
   
   
	int grid[N][N];
	int i,j,n;
	cout<<"Enter the size"<<"\n";
	cin>>n;
	cout<<"Enter the number"<<"\n";
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>grid[i][j];
    if (SolveSudoku(grid) == true) { 
		cout<<"\n";
        printGrid(grid);
	
	}  
	else
        cout << "No solution exists";  
  
    return 0;  
}
