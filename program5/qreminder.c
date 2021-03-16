#include <stdio.h>
// #include <math.h>

int main(){
    float quotient;
    float reminder;
    int number1;
    int number2;
    printf("enter number1- ");
    scanf("%d",&number1);
    printf("enter number2- ");
    scanf("%d",&number2);
    quotient = number1/number2;
    reminder = number1%number2;
    printf("quotient %.1f",quotient);
    printf("\nreminder %.1f",reminder);

    return 0;
}