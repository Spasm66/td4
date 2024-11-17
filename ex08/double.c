#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool exist_double_occurrence(int *tab, int l)
{
    int j;

    j = 0;
    for (int i = 0; i < l; i++)
    {
        for (j = i + 1; j < l; j++)
        {
            if (tab[i] == tab[j])
                return (true);
        }
    }
    return (false);
}

int main(void)
{
    int tab[] = {9, 9};
    int res = exist_double_occurrence(tab, 2);
    printf("%d\n", res);
}