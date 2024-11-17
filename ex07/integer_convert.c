#include <stdio.h>
#include <stdlib.h>

int pow10for(int n)
{
    int res;

    res = 1;
    for (int x = 0; x < n; x++)
    {
        res = res * 10;
    }
    return (res);
}


int integer_convert(int *tab, int l)
{
    int res;

    res = 0;
    for (int i = 0; i < l; i++)
    {
        res += tab[i] * pow10for(l - i - 1);
        if (tab[i] < 0 || tab[i] > 9)
        {
            fprintf(stderr, "format incorrect\n");
            exit(EXIT_FAILURE);
        }
    }
    return (res);
}

int main(void)
{
    int tab[] = {-9};
    int res = integer_convert(tab, 1);
    printf("%d\n", res);
}