#include <stdio.h>

void main() /* count characters in input; while version */
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("\n%ld\n", nc);
}

// Character Counting with for
// void main() /* count characters in input; for version */
// {
//     double nc;
//     for (nc = 0; getchar() != EOF; ++nc);
//     printf("\n%.0f\n", nc);
// }