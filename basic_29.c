#include<stdio.h>

int main() {
    char city,num[10];
    int sum, i;
    scanf("%c%s",&city,num);

    if(city>=65 && city<=72) 
        city-=55;
    else if(city=='I')
        city-=39;
    else if(city>=74 && city<=78)
        city-=56;
    else if(city=='O')
        city-=44;
    else if(city>=80 && city<=86)
        city-=57;
    else if(city=='W')
        city-=55;
    else if(city=='X' || city=='Y')
        city-=58;
    else if(city=='Z')
        city-=57;

    sum=num[8]-48;        //'1' = 49
    for(i=0;i<8;i++){ /*!身分證字號數字共9碼，除去最後一碼共8碼，i值最大為7*/
        sum+=(num[i]-48)*(8-i);
    }      
    sum+=city/10+(city%10)*9;

    if(sum%10==0) printf("CORRECT!!!\n");
    else  printf("WRONG!!!\n");

    return 0;
}