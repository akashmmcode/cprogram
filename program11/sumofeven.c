#include <stdio.h>
#include <math.h>


int main(){
    int even = 0;
    int odd = 0;
    int input = 0;
    int i = 0;


    printf("Total n numbers: ");
    scanf("%d",&input);

    for(i==1;i<=input;i++){
        if (i%2==0){
            even = even + i;}
        else{
            odd = odd + i;}}
    printf("sum of even %d\n",even);
    printf("sum of odd %d\n",odd);
    
    return 0;
    }
    

