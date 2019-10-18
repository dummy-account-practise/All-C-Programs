#include<stdio.h> 

int count( int S[], int m, int n ) 
{ 
	int i, j, x, y; 
	int table[n+1][m]; 
	for (i=0; i<m; i++) 
		table[0][i] = 1;
    
	for (i = 1; i < n+1; i++) 
	{ 
		for (j = 0; j < m; j++) 
		{ 
			x = (i-S[j] >= 0)? table[i - S[j]][j]: 0; 

			y = (j >= 1)? table[i][j-1]: 0; 

			table[i][j] = x + y; 
		} 
	} 
	return table[n][m-1]; 
} 

void main() 
{ 
  int m,n,arr[100],i;
  printf("Enter size of number of different coins");
  scanf("%d",&m);
  for(i=0;i<m;i++){
    scanf("%d",&arr[i]); 
    }
	printf("Enter money value for which change asked");
  scanf("%d",&n);
	printf(" %d ", count(arr, m, n)); 
} 
