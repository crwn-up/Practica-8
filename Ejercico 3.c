//Luis Crown
//Ejercicio 3 Práctica 7
#include <stdio.h>

int main() {
    int numero;
    int contador = 0;
    int suma = 0;

    printf("Introduce un número, (con 0 puede finalizar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        printf("Has introducido el número %d\n", numero);
        contador++;
        suma += numero;

        printf("Introduce un número (con 0 puede finalizar): ");
        scanf("%d", &numero);
    }

    printf("Finalizando: Se ha introducido el número 0\n");
    printf("Cantidad de números introducidos: %d\n", contador);
    printf("Suma total de los números introducidos: %d\n", suma);

    return 0;
}
