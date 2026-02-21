#include <stdio.h>

/*
  La diferencia entre direcciones consecutivas: 4 bytes
  Formula general: Base + i x tam_tip
*/

int main(){
	//Resolver ejercicio 1
	int a[6];

	for(int i = 0; i < 6; i++){
		printf("\nDireccion: %p", &a[i]);
	}

	return 0;
}

