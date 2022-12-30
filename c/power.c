#include <stdio.h>
#include <math.h>

int power(double num,double args){
    return round(pow(num,args));
}

void main()
{
    double num;
    printf("請輸入數字: ");
    scanf("%lf",&num);
    printf("%d",power(num,2));
}
