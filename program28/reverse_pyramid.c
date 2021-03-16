#include <stdio.h>
#include <math.h>
int main(){
    int rows;
    printf("Enter the number of rows");
    scanf("%d",&rows);
    int i = rows;
    while(i>=1){
        int space = 0;
        while(space<rows-i){
            printf(" ");
            space = space + 1;
        }
        int j = i;
        while(j<= 2*i-1){
            printf("*");
            j = j + 1;
        }
        j = 0;
        while(j<i-1){
            printf("*");
            j = j + 1;
        }
        printf("\n");
        i = i - 1;
    }
    return 0;
}