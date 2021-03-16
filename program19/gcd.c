#include <stdio.h>
#include <math.h>

int main(){
    int input1 = 0;
    int input2 = 0;
    int low = 0;
    printf("Enter input1:\n");
    scanf("%d",&input1);
    printf("Enter input2:\n");
    scanf("%d",&input2);
    if(input1<input2){
        low = input1;
    }
    else{
        low = input2;
    }
    int gcd = 0;
    int i = 1;

    while(i<=low){
        if(input1%i == 0 && input2%i == 0){
        gcd = i;
        i = i + 1;}
        else{
            i = i + 1;
        }
    }
    printf("Greatest Common Divisor of two numbers: %d\n",gcd);
        
    return 0;        
    
}