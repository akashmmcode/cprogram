#include <stdio.h>
#include <math.h>

int main(){
    int input = 0;
    int factorial = 1;
    int i = 1;
    printf("Enter a number:\n");
    scanf("%d",&input);
    while(i<=input){
        factorial = input * i;
        printf("%d\n",factorial);
        i = i + 1;     
    }
    return 0;
}