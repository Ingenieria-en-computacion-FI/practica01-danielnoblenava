#include <stdio.h>

/*
  La direccion m[1][0] es mayor que m[0][3], porque esta mÃs 
  arriba en la memoria.
*/
int main(){
	int m[2][4];
	printf("\nm[0][3] = %p ", &m[0][3]);
	printf("\nm[1][0] = %p", &m[0][1]);
	printf("\n");
}
