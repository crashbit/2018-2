#include <stdio.h>

void main(){
	int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int reng, col;

	for(reng = 0; reng < 3; reng++){
		printf("\n");
		for(col=0; col<3; col++){
			printf(" %d ", matriz[reng][col]);
		}
	}

	printf("\n\n\n");
}