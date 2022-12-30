#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool check(int i){
    return (i==1)?true:(i==2||i==3||i==5||i==7)?false:(i%2==0||i%3==0||i%5==0||i%7==0)?true:false;
}

void main()
{
    int min;
    int max;
    int count=0;
    printf("請輸入範圍: ");
    scanf("%d %d",&min,&max);
    for(int i=min;i<=max;i++){
        if(check(i)) continue;
        printf("%d ",i);
        count++;
    }
    printf("\n完成 共%d個",count);
}
