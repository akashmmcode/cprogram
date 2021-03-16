#include <stdio.h>
int main() {
    int input1 = 0;
    int input2 = 0;
    int max = 0;
    printf("Enter two positive integers: ");
    scanf("%d", &input1);
    scanf("%d", &input2);
    if(input1>input2){
        max = input1;
    }
    else{
        max = input2;
    }
    printf("max = %d\n",max);

    while(1) {
        if (max % input1 == 0 && max % input2 == 0) {
            printf("%d.",max);
            break;
        }
        max = max + 1;
    }
    return 0;
}

