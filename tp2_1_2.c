#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 20

int main()
{
    // codigo a completar
    srand(time(NULL));
    int i;
    double vt[N];
    double *pVt;

    pVt = vt;

    for(i = 0;i<N; i++)
    {
        *(pVt + i) = 1+rand()%100;
        printf("%f\n", *(pVt + i));
    }
    return 0;
}