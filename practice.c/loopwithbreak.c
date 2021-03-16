#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int low = 0;
    int high = 0;
    bool flag = false;
    printf("Enter first number:\n ");
    scanf("%d",&low);
    printf("Enter seecond number:\n ");
    scanf("%d",&high);
    int i = low;
    while(i>=low && i<=high){
        if(i%5==0){
            flag = true;
            break;
        }
        else{
            i = i+1;}
    }


        if(flag == true){
            printf("%d",i);
            printf("Found");
        }
        else{
            printf("Not found");
        }

    return 0;


}