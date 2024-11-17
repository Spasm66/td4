#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NONE -1

int index_last_occurrence(char *str, char c)
{
    int res;
    int i;

    res = NONE;
    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            res = i;
        i++;
    }
    return (res);
}

int main(int argc, char **argv)
{
    (void)argc;
    printf("%d\n", index_last_occurrence(argv[1], 'a'));
}