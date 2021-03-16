#include <stdio.h>
#include <math.h>

int main(){
    int rows = 0;
    int i = 1;
    int number = 1;
    printf("Enter number of rows to be printed");
    scanf("%d",&rows);
    while(i<=rows){
        int j = 1;
        while(j<=i){
            printf("%d ",number);
            number = number + 1;
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
    return 0;
}