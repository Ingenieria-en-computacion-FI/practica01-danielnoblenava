
#include <stdio.h>

/*
  ÂPorquÃ©compila? Porque simplemente estas accediendo a una parte de la memoria
  ÂPor quÃ©es peligroso? Porque el compilador asigna un espacio de 5 enteros, al 
  intentar acceder estas yendo a una parte no definida por el compilador aÃn.
  ÂQuÃ©revela? Que C es un lenguaje que te permite gestionar y acceder la memoria 
  como quieras.
*/
int main(){
	int a[5];
	printf("\na[-1]: %p", &a[-1]);
	printf("\na[5]: %p", &a[5]);
    return 0;
}
