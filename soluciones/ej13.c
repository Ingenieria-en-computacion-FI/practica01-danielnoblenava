#include <stdio.h>

#include <stdio.h>


void calcularArreglo(int n, double A[n][n], double B[n]) {
    for (int i = 0; i < n; i++) {
        
        if (i % 3 == 1) {
            double suma = 0.0;
            for (int j = 0; j <= i; j++) {
                suma += A[i][j];
            }
            B[i] = suma;
            
        } else if (i % 3 == 2) {
            double prod = 1.0;
            for (int j = 1; j < n; j++) {
                prod *= A[j][i];
            }
            B[i] = prod;
            
        } else {
            double prod = 1.0;
            for (int j = 0; j < n; j++) {
                prod *= A[j][i];
            }
            
            double suma = 0.0;
            for (int j = 0; j <= i; j++) {
                suma += A[j][i];
            }
            
            if (suma != 0.0) {
                B[i] = prod / suma;
            } else {
                printf("Advertencia: División por cero en el índice %d. Asignando 0.\n", i);
                B[i] = 0.0; 
            }
        }
    }
}

int main() {
    int n = 3; 
    
    double A[3][3] = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0},
        {7.0, 8.0, 9.0}
    };
    
    double B[3];
    

    calcularArreglo(n, A, B);
    
    printf("Arreglo resultante B:\n");
    for (int i = 0; i < n; i++) {
        printf("B[%d] = %.2f\n", i, B[i]);
    }

    return 0;
}



