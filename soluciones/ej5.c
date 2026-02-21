
#include <stdio.h>

/*
La afirmacion de a[0] = 1000 entonces a[10] = 1010 es falsa porque esta es la salida real: 
&a[0] = 1000
&a[1] = 1004
&a[2] = 1008
&a[3] = 1012
&a[4] = 1016
&a[5] = 1020
&a[6] = 1024
&a[7] = 1028
&a[8] = 1032
&a[9] = 1036
&a[10] = 1040
*/
int main(){
	int a[3];
	for(int i = 0; i<11; i++){
		printf("\n&a[%d] = %d", i, 1000+i*sizeof(a[i]));
	}
	printf("\n");
	return 0;
}
