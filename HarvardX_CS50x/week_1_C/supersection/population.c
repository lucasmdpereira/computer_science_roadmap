// Determine how long it takes for a population to reach a particular size.

// Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.
// For example, if we were to start with n = 1200 llamas, then in the first year, 1200 / 3 = 400 new llamas would be born and 1200 / 4 = 300 llamas would pass away. At the end of that year, we would have 1200 + 400 - 300 = 1300 llamas.
// To try another example, if we were to start with n = 1000 llamas, at the end of the year, we would have 1000 / 3 = 333.33 new llamas. We can’t have a decimal portion of a llama, though, so we’ll truncate the decimal to get 333 new llamas born. 1000 / 4 = 250 llamas will pass away, so we’ll end up with a total of 1000 + 333 - 250 = 1083 llamas at the end of the year.

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // TODO: Prompt for start size
    long start_size;
    do{
        start_size = get_long("Start size: ");
    } while (start_size < 9);

    // TODO: Prompt for end size
    long end_size;
    do{
        end_size = get_long("End size: ");
    } while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    float actual_size = (float) start_size;
    int years;
    for (years = 0; actual_size < end_size; years++){
        float size_gain = floor(actual_size / 3);
        float size_lost = floor(actual_size / 4);
        actual_size = actual_size + size_gain - size_lost;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
