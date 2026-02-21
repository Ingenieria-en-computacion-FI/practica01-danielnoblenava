
#include <stdio.h>

/*
  DirecciÃn de m[2][4] = 4048
  DirecciÃn de m[1][3] = 4028
  Diferencia entre ambas = 20 bytes
*/
int main(){
	int m[3][5];
	int base = 4000;

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++){
			int direccion = base + ((i * 4) + j) * sizeof(m[i][j]);
			printf("\nm[%d][%d] = %d", i, j, direccion);
		}
	}
	printf("\n");
	return 0;
}
