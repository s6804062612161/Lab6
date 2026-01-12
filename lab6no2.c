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
	
	int temp = 100;
	for (i=0;i<row;i++){
		for (j=0;j<column;j++){
			if (A[i][j] < temp){
				temp = A[i][j];
			} 
		}	
	}
	printf("%d",temp);	
	return 0;
}
