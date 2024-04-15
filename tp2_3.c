#include<stdio.h>
#include<stdlib.h> // Para usar la función rand()
#include<time.h> // Para usar la función time()
#define N 5
#define M 7
int main()
{
    srand(time(NULL)); // Inicializar la semilla del generador de números aleatorios
    int i, j;
    int mt[N][M];
    int *p = &mt[0][0];
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            *(p + i*M + j) = 1 + rand() % 100;
            printf("%d ", *(p + i*M + j)); // Cambiado %lf a %d
        }
        printf("\n");
    }
    return 0;
}


