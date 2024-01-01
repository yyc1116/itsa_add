#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    double area;
    scanf("%d %d", &a, &b);
    area = (a*b)/2.0;
    printf("%.1f\n", area);
    return 0;
}