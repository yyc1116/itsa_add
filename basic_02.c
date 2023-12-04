#include <stdio.h>
int main() {
	int km;
	double b;
    while(scanf("%d", &km) != EOF){
        b = km*1.6;
        printf("%.1lf\n", b);
    }
    return 0;
}