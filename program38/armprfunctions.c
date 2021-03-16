#include <math.h>
#include <stdio.h>

int checkPrimeNumber(int n);
int checkArmstrongNumber(int num);

int checkPrimeNumber(int n){
    int i = 0;
    int flag = 1;
    int squareRoot = 0;
    squareRoot = sqrt(n);
    i = 2;
    while(i<=squareRoot){
        if(n%i==0){
            flag = 0;
            break;
        }
        else{
            i = i + 1;
        }
        return flag;
    }
}

int checkArmstrongNumber(int num){
    int originalnum = 0;
    int reminder = 0;
    int n = 0;
    int flag = 0;
    int result = 0;
    
    for(originalnum = num;originalnum!=0;++n){
        originalnum = originalnum/10;
    }

    for(originalnum = num;originalnum!= 0;originalnum = originalnum/10){
        reminder = originalnum%10;
        result = result + pow(reminder,n);
    }
    
    if(result == num){
        flag = 1;
    }
    else{
        flag = 0;
    }
    
    return flag;
}


int main(){
    int n = 0;
    int flag = 0;
    printf("Enter a positive integer:");
    scanf("%d",&n);

    flag = checkPrimeNumber(n);
    if(flag == 1){
        printf("%d is a prime number.\n",n);
    }
    else{
        printf("%d is not a prime number.\n",n);
    }

    flag = checkArmstrongNumber(n);
    if(flag == 1){
        printf("%d is an Armstrong number.",n);
    }
    else{
        printf("%d is not an Armstrong number.",n);
    }
    return 0;
}
