#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_square_array(int *tab, int l, int n)
{
    if (n % 2)
        return (0);
    for(int i = 0; i < n / 2; i++)
    {
        if (tab[i] != tab[i + n / 2] || l < n)
            return (false);
    }
    return (true);
}

int main(void) {
    int t[]={2,2,1,2,6};
    if (is_square_array(t, 5, 2))
        printf("Le tableau est un carré\n");
    else
        printf("Le tableau n'est pas un carré\n");
    
    return EXIT_SUCCESS;
}