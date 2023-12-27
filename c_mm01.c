#include <stdio.h> 

int main(){
    int uBottom, lBottom, h;
    double area;
    scanf("%d %d %d", &uBottom, &lBottom, &h);
    area = ((uBottom + lBottom) * h) / 2.0;
    printf("Trapezoid area:%.1f\n", area);
    return 0;
}