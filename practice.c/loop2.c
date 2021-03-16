#include <stdio.h>
#include <math.h>

int main(){
    int low = 0;
    int high = 0;
    printf("Enter number1:\n ");
    scanf("%d",&low);
    printf("Enter number2:\n ");
    scanf("%d",&high);
    int i = low;
    while(i>=low && i<=high){
        if(i%5 == 0){
            printf("%d",i);
            return 0;}
        else{
            i = i + 1;}
    }
    printf("not found");
    
    return 0;
}