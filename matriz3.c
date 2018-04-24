#include <stdio.h>

void main(){
	int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int reng, col;
	int total = 0;

	for(reng = 0; reng < 3; reng++){
		printf("\n");
		for(col=0; col<3; col++){
			total = total + matriz[reng][col];
		}
	}

	printf("El resultado es: %d", total);
	printf("\n\n\n");
}