#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void    display_full_tab(unsigned int *tab, int n)
{
    printf("[ ");
    for (int i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("]\n");
}

void    display_tab(unsigned int *tab, int l, int n)
{
    printf("[ ");
    for (int i = 0; i < l && i < n; i++)
        printf("%d ", tab[i]);
    printf("]\n");
}

int main(void) {
    unsigned int t[]={1,2,3,9};
    display_tab(t, 4, 5);
    
    return EXIT_SUCCESS;
}



