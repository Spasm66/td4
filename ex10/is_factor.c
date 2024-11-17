#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool    is_factor(int *tab, int *sub, int l, int ls)
{
    int c;
    int i;

    c = 0;
    i = 0;
    while (c < ls && i < l)
    {
        if (tab[i] == sub[c])
            c++;
        i++;
    }
    if (c == ls)
        return (true);
    return (false);
}

int main(void)
{
    int tab[] = {9, 9, 4, 9 , 0, 5, 7};
    int sub[] = {4, 6};
    int res = is_factor(tab, sub, 7, 2);
    printf("%d\n", res);
}