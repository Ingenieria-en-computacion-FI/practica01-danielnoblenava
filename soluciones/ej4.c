
#include <stdio.h>

/*
  Tamaño del tipo: 4 bytes
  direccion de a[5] = 0x7ffc752c7d50 o 5020
  formula = Base + i x tam_tipo
*/
int main(){
	int a[3];
	
	printf("\n&a[0] = %d", 5000+0*sizeof(a[0]));
	printf("\n&a[3] = %d", 5000+3*sizeof(a[3]));	
	return 0;
}
