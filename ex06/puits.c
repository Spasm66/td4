#include <stdio.h>
#include <stdlib.h>

int pits_count(int *tab, int l)
{
    int c;

    c = 0;
    for (int i = 1; i < l - 1; i++)
    {
        if (tab[i - 1] > tab[i] && tab[i + 1] > tab[i])
            c++;
    }
    return (c);
}

int main(void)
{
    int tab[] = {1, 3, 2, 6, 8, 1, 9};
    printf("%d\n", pits_count(tab, 7));
}