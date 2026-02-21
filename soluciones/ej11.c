
#include <stdio.h>

/*
  Tamano del tipo: 8 bytes
  Tipo posible: long long
  Formula usada: 1000+i*sizeof(a[i])
*/

int main(){
    // Resolver ejercicio 11
	long long a[3];
	
	for(int i = 0; i < 3; i++){
		printf("\n&a[%d] = %d", i, 1000+i*sizeof(a[i]));
	}
	printf("\n");
	
	return 0;
}
