#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define N 20 // Definimos el tamaño del array
int main()
{
    int i; // Variable de iteración
    double vt[N], *p; // Declaramos un array de doubles y un puntero a double
    p=vt; // Asignamos al puntero la dirección del primer elemento del array
    srand(time(NULL)); // Inicializamos la semilla del generador de números aleatorios
    for (i = 0; i < N; i++) // Recorremos el array
    {
        *(p+i) = 1 + rand() % 100; // Asignamos un número aleatorio al i-ésimo elemento del array usando aritmética de punteros
        printf("%f ", *(p+i)); // Imprimimos el i-ésimo elemento del array usando aritmética de punteros
    }
    return 0; // Terminamos el programa
}
