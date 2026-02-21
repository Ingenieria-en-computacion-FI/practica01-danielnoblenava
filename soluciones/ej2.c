
#include <stdio.h>

/*
  La dirección a[5] es mayor que a[4] porque esta más "arriba" en memor
  Direccion de a[4] = 0x7fffc69eba50
  Direccion de a[5] = 0x7fffc69eba54
*/

int main(){
    	int a[6];
	printf("\n%p", &a[4]);
	printf("\n%p", &a[5]);
        return 0;
}




