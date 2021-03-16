#include<stdio.h>
int main(){
    int input1 = 0;
    int input2 = 0;
    int temp = 0;
    printf("Enter a input1 ");
    scanf("%d",&input1);
    printf("Enter a input2 ");
    scanf("%d",&input2);

    temp = input1;
    input1 = input2;
    input2 = temp;

    printf("input1 %d\n",input1);
    printf("input2 %d\n",input2);

    return 0;
}    