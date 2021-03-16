#include <stdio.h>
#include <math.h>
int main(){
    int i = 1;
    int rows = 0;
    printf("Enter a number");
    scanf("%d",&rows);
    while(i<=rows){
        int j = 1;
        while(j<=i){
            printf("* ");
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
    return 0 ;


}