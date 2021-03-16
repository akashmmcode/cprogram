#include <stdio.h>
#include <math.h>

int main(){
    int input1 = 0;
    int even = 0;
    int odd = 0;
    printf("enter a number - ");
    scanf("%d", &input1);

    if(input1%2==0){
        printf("even \n");
    }
    else{
        printf("odd \n");
    }
    return 0;
}