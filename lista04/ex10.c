#include <stdio.h>

int main()
{
    int ni, nj, i, j;
    int matriz[i][j];
    scanf("%d%d", &ni, &nj);
    if (ni <= 0 || ni > 10 || nj <= 0 || nj > 10)
        printf("Dimensao invalida\n");
    for (i = 0; i < ni; i++)
    {
        for (j = 0; j < nj; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }




    return 0;
}