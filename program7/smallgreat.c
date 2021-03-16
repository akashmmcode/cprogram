#include <stdio.h>
#include <math.h>

int main(){
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int high = 0;
    int low = 0;
    printf("enter number1 - ");
    scanf("%d",&number1);
    printf("enter number2 - ");
    scanf("%d",&number2);
    printf("enter number3 - ");
    scanf("%d",&number3);
    if(number1>=number2){
        high = number1;
        low = number2;}
    else {
        high = number2;
        low = number1;}


    if(number3>high){
        printf("higest number %d",number3);
    }
    else{
        printf("higest number %d", high);
    }
    if (number3<low){
        printf("lowest number %d", number3);
    }
    else{
        printf("lowest number %d", low);
    }    

    return 0;


}