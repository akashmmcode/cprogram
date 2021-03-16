#include<stdio.h>

int main(){
    float number1 = 0;
    float number2 = 0;
    float number3 = 0;
    float sum;
    float mean;
    float percentage;
    printf("enter 3 number\n");
    scanf("%f %f %f",&number1, &number2, &number3);


    
    sum = number1 + number2 + number3;
    printf("sum - %.1f ",sum);
    mean = (number1 + number2 + number3)/3;
    printf("mean - %.1f ",mean);
    percentage = (sum/300)*100;
    printf("percentage - %.1f ",percentage);
    return 0;
}