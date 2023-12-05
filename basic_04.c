#include<stdio.h>
#include<string.h>

int main(){
    int start_hour = 0, start_min = 0, end_hour = 0, end_min = 0;
    int total_min = 0, times = 0;

    scanf("%d %d", &start_hour, &start_min);
    scanf("%d %d", &end_hour, &end_min);

    total_min = (end_hour * 60 + end_min) - (start_hour * 60 + start_min);
    times = total_min;
    if(total_min <= 120){
        times /= 30;
        printf("%d\n", times*30);
    }
    else if((total_min > 120)&&(total_min < 240)){
        times -= 120;
        times /= 30;
        printf("%d\n", times*40+120);
    }
    else if(total_min > 240){
        times -= 240;
        times /= 30;
        printf("%d\n", times*60+120+160);
    }
    return 0;
}