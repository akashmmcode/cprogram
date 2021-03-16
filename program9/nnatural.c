#include <stdio.h>
#include <math.h>

int main(){
    int total = 0;
    int input = 0;
    int i = 0;
    printf("Enter no of natural number \n");
    scanf("%d",&input);
    for (i=1;i<=input;i++){
        total = total + i;
    }
    printf("%d\n",total);

    if (input == 0){
        printf("invalid input\n");
    }
    
    return 0;
}