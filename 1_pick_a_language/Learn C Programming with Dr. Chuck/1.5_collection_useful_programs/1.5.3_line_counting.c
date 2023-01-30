#include<stdio.h>

void main() /* count lines in input; while version */
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c== '\n')
            ++nl;
    printf("%d\n", nl);
}
