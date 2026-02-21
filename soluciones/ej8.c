
#include <stdio.h>

/*
  Num de columnas: 4
  tamaÃo total: 4 bytes de m[2][4]
*/
int main(){
	int m[2][4];

	m[1][2] = 2024;
	printf("\ntamaÃo: %d", sizeof(m[1][2]));
    return 0;
}
