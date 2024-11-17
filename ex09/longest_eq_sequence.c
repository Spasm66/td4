#include <stdio.h>
#include <stdlib.h>

int longest_eq_sequence(int tab[], int l)
{
    int i;
    int j;
    int max;
    int temp;

    i = 0;
    j = 0;
    max = 0;
    while (i < l)
    {
        temp = 0;
        j = i + 1;
        while(tab[i] == tab[j])
        {
            temp++;
            j++;
        }
        i = j;
        if (temp > max)
            max = temp;
    }
    return (max + 1);
}

int main(void)
{
    int tab[] = {4, -1, -4, -2, 3, 0, 4, 0, 2};
    int res = longest_eq_sequence(tab, 9);
    printf("%d\n", res);
}