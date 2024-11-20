#include <stdio.h>
#define LIM 20
#define FALSE 0
#define TRUE 1

int main(void)
{
    int achou, n, i, j, k, freq[LIM];
    double num, numero[LIM];
    scanf("%d", &n);
    if (n <= LIM)
    {
        k = -1;
        for (i = 0; i < n; i = i + 1)
        {
            scanf("%lf", &num);
            achou = FALSE;
            j = 0;
            while (!achou && j <= k)
                if (numero[j] == num)
                {
                    achou = TRUE;
                    freq[j] = freq[j] + 1;
                }
                else j = j + 1;
            if (!achou)
            {
                k = k + 1;
                numero[k] = num;
                freq[k] = 1;
            }
        }
        printf("   Num   Freq\n");
        for (j = 0; j <= k; j = j + 1)
        {
            printf("%6.1lf", numero[j]);
            printf("%7d\n", freq[j]);
        }
    }
    return 0;
}
