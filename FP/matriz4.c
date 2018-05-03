#include <stdio.h>

int main(){

	char matriz[4][20] = {"pedro", "juan", "luis", "carlos"};
	int reng, col;

	for(reng = 0; reng<4; reng++){
		printf("%s\n",matriz[reng]);
	}

	printf("\n\n");
	return 0;
}