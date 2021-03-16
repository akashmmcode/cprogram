#include <stdio.h>
#include <math.h>

int main(){
    int rows = 0;
    int i = 1;
    printf("Enter no of rows");
    scanf("%d",&rows);
    while(i<=rows){
        int space = 1;
        while(space<=rows-i){
            printf(" ");
            space = space + 1;
        }
        int k = 0;
        while(k!= 2*i - 1){
            printf("*");
            k = k + 1;
        }
        printf("\n");
        i = i + 1;
    }
    return 0;
}



