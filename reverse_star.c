#include <stdio.h>
#include <math.h>

int main(){
    int rows = 0;
    int j = 0;
    printf("Enter the number of rows");
    scanf("%d",&rows);
    int i = rows;
    while(i>=1){
        int j = 1;
        while(j<=i){
            printf("*");
            j = j + 1;
        }
        printf("\n");
        i = i - 1;
    }
    return 0;
}