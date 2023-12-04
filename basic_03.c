#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int input_x, input_y;
    while(scanf("%d %d", &input_x, &input_y) != EOF){
		if(input_x*input_x + input_y*input_y <= 10000) printf("inside\n");        //若X平方+Y平方小於半徑(100)^2，輸出"inside" 
		else printf("outside\n");
	}
    return 0;
}