#include <stdio.h>

int main(){
	int A[4][3],B[3][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("A[%d][%d] = \n",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			B[j][i] = A[i][j];
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			B[i][j] = A[j][i];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%5d",B[i][j]);
		}
		printf("\n");
	}
}
