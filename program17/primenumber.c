#include <stdio.h>
#include <string.h>
#define bool int
#define true 1
#define false 0
int main(){
    int input = 0;
    int i = 0;
    bool flag = false;
    printf("Enter a number: ");
    scanf("%d",&input);
    if(input==0 || input==1){
        printf("Not a Prime number\n");
        }
  
    
    else{
        while(i>=2 && i<input){
        if(input%i == 0){
            flag = true;
            break;
        }
        else{
            i = i + 1;
        }
    }  
    }  

    if (flag == false){
        printf("Prime numebr");
    }
    else{
        printf("Not a Prime number");
    }
    return 0;
    }