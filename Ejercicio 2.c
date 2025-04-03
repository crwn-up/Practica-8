//Luis Crown
//Ejercicio 2 Práctica 7
#include <stdio.h>

int main() {
    int suma = 0;
    int contador = 0;
    int numero;

    do {
        printf("Ingrese un número: ");
        scanf("%d", &numero);

        suma += numero;
        contador++;

    } while (contador < 10 && suma <= 100);

    if (contador == 10) {
        printf("Se han introducido 10 números.\n");
    } else if (suma > 100) {
        printf("La suma de los números introducidos es mayor a 100.\n");
    }

    return 0;
}
