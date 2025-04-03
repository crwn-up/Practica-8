//Luis Crown
//Ejercicio 1 Práctica 7
#include stdio.h
int main () {
    int n;
    int count_par=0, count_impar=0;
    int ultimo_par=0, int ultimo_impar=0;
    printf("Introduzca la cantidad de números");
    scanf("%d", &n);
    while (num=<n) {
        if (num %2 == 0)
        count_par++;
        ultimo_par= num;
    } else {
        count_impar++;
        ultimo_impar = num;
    }
    num++;
}
printf("\nCantidad de numeros pares: %d\n", countpar);
printf("Cantidad de números impares:%d\n", countimpar);
if (ultimo_par!=-1){
    printf("Ultimo numero par: d%\n", ultimo_par);
    }
    if (ultimo_impar != -1) {
        printf("ultimo numero impar: d%\n", ultimo_impar);
    }
    return 0;
    }
#include <stdio.h>

int main() {
    int n;
    int count_par = 0, count_impar = 0;
    int ultimo_par = -1, ultimo_impar = -1;
    int num = 1; // Inicializamos num en 1 para recorrer desde 1 hasta n

    // Solicitar al usuario la cantidad de números a evaluar
    printf("Introduzca la cantidad de números: ");
    scanf("%d", &n);

    // Evaluar números desde 1 hasta n
    while (num <= n) {
        if (num % 2 == 0) {
            count_par++;
            ultimo_par = num;
        } else {
            count_impar++;
            ultimo_impar = num;
        }
        num++;
    }

    // Mostrar resultados
    printf("\nCantidad de números pares: %d\n", count_par);
    printf("Cantidad de números impares: %d\n", count_impar);

    if (ultimo_par != -1) {
        printf("Último número par: %d\n", ultimo_par);
    } else {
        printf("No se encontraron números pares.\n");
    }

    if (ultimo_impar != -1) {
        printf("Último número impar: %d\n", ultimo_impar);
    } else {
        printf("No se encontraron números impares.\n");
    }

    return 0;
}
