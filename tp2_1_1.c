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
    for(i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;
        printf("%f\n", vt[i]);
    }
    return 0;
}