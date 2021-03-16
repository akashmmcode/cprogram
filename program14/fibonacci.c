#include <stdio.h>
#include <math.h>
int main(){
    int first = 0;
    int second = 1;
    int input = 0;
    int third = 0;
    printf("Enter number:");
    scanf("%d",&input);

    if (input == 0){
        printf("invalid input\n");
    }

    else{
        if(input > 0){
        printf("%d\n",first);}

    if(input > 1){
        printf("%d\n",second);}
    int i = 2;
    while(i<input){
        third = first + second;
        printf("%d\n",third);
        first = second;
        second = third;
        i = i + 1;}
    }
    return 0;
}