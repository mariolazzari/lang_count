#include <stdio.h>
#include <time.h>

int main()
{
    unsigned long count = 1000000000;
    time_t start_t, end_t;
    double diff_t;

    time(&start_t);
    while (count > 0)
    {
        count--;
    }
    time(&end_t);
    diff_t = difftime(end_t, start_t);

    printf("%f", diff_t);

    return 0;
}