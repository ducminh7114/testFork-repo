#include <stdio.h>
#include <math.h>

int main(void) {
    double score;
    if (scanf("%lf", &score) != 1) return 0;

    int ipart = (int)score;
    double frac = score - ipart;
    double result;

    if (frac < 0.25) {
        result = (double)ipart; /* drop fractional part */
    } else if (frac <= 0.5) {
        result = ipart + 0.5; /* round to .5 */
    } else {
        result = ipart + 1; /* round up */
    }

    printf("%.1f\n", result);
    return 0;
}

