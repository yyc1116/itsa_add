#include <stdio.h>
#include <stdlib.h>

int main(){
    double c, f;

    scanf("%lf", &c);
    f = c * (9.0 / 5.0) + 32;
    printf("%.1f\n", f);
    return 0;
}