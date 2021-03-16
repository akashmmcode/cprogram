#include <stdio.h>
#include <math.h>

int main(){
    float principal;
    float rate;
    float time;
    float simple_intrest;
    float compound_intrest;
    float one;
    int intrest;
    printf("enter principal");
    scanf("%f",&principal);
    printf("enter rate");
    scanf("%f",&rate);
    printf("enter time");
    scanf("%f",&time);
    printf("enter which intrest");
    scanf("%d", &intrest);
    if(intrest == 1){
    simple_intrest = ((principal*time*rate)/100);
    printf("simple intrest %.2f",simple_intrest);
    }
    else{
    one = (1+(rate/100));
    compound_intrest = principal*(pow(one,time)-1);
    printf("compound intrest %.2f",compound_intrest);
    }
    return 0;

}