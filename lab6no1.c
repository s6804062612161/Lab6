#include <stdio.h>
int main(){
	int i,j,row,column;
	scanf("%d %d",&row,&column);
	int A[row][column];
	
	for (i=0;i<row;i++){
		for (j=0;j<column;j++){
			scanf("%d", &A[i][j]);
		}	
	}
	
		
	for (i=0;i<row;i++){
		for (j=0;j<column;j++){
			printf("%d ", A[i][j]+1);
		}
		printf("\n");
	}
	return 0;
}
