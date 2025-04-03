//Luis Crown
//Ejercicio 1 Práctica 7
#include <stdio.h>

int main() {
    int n;
    int count_par = 0, count_impar = 0;
    int ultimo_par = -1, ultimo_impar = -1;
    int num = 1; 

   
    printf("Introduzca la cantidad de números: ");
    scanf("%d", &n);

  
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

#include <stdio.h>

int main() {
    int suma = 0;
    int contador = 0;
    int numero;

    // Bucle que se ejecuta al menos una vez y continúa mientras no se cumplan las condiciones de parada
    do {
        printf("Ingrese un número: ");
        scanf("%d", &numero);

        suma += numero;
        contador++;

    } while (contador < 10 && suma <= 100);

    // Verificar cuál condición se ha cumplido para salir del bucle
    if (contador == 10) {
        printf("Se han introducido 10 números.\n");
    } else if (suma > 100) {
        printf("La suma de los números introducidos es mayor a 100.\n");
    }

    return 0;
}
