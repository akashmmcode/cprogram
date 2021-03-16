#include <stdio.h>
#include <math.h>


int main(){
    int even = 0;
    int odd = 0;
    int input = 0;
    int i = 0;
    printf("Total n numbers: ");
    scanf("%d",&input);

    while(i<=input){
        if(i%2==0){
            even = even + i;
            i = i + 1;
            printf("sum of even %d",even)
        }
        else{
            odd = odd + i;
            i = i + 1;
            printf("sum of odd %d",odd)
        }

        return 0;
    }