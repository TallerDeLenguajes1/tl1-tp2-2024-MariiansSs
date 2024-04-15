#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 5
#define M 7

int main()
{
    srand(time(NULL));
    int i,j;
    int mt[N][M];
    int *pMt;

    pMt = (int *)mt;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *(pMt + (i * M + j)) = 1+rand()%100;
            printf("%d ", *(pMt + (i * M +j)));
        }
        printf("\n");

    }
    

    return 0;
}