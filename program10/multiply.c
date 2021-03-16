#include <stdio.h>
#include <math.h>

int main(){
    int i = 0;
    int input = 0;
    int multiply = 0;
    printf("Enter a number: ");
    scanf("%d",&input);
    for (i = 1;i<=10;i++){
        multiply = input * i;
        printf("%d\n",multiply);
    }

    if (input == 0){
        printf("invalid input\n");
    }

    return 0;
    
}