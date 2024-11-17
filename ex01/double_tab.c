#include <stdio.h>
#include <stdlib.h>

int len_tab(int *tab)
{
    int i;

    i = 0;
    while (tab[i])
        i++;
    return (i);
}

int main(int argc, char **argv) 
{
    int l;

    (void)argc;
    l = 0;
    while (argv[l])
        l++;
    int tab[l];

    for (int j = 1, k = 0; j < l; j++, k++)
        tab[k] = atoi(argv[j]);
    printf("[");
    for (int i = 0; i < l - 1; i++)
        printf(" %d", tab[i]);
    printf(" ]\n");
    printf("[");
    for (int i = 0; i < l - 1; i++)
        printf(" %d", tab[i] * 2);
    printf(" ]\n");
    return EXIT_SUCCESS;
}