#include <stdio.h>
#include <string.h>
#define bool int
#define true 1
#define false 0
int main() {
    char a[10];
    int length = 0;
    int pally = 0;
    int i = 0;
    printf("enter a string\n");
    scanf("%s",a);
    length = strlen(a);
    printf("%d\n",length);
    
    if(length == 1){
        printf("palindrome");
    }
    while(i<length/2){
        if(a[i]==a[length-(i+1)]){
            i = i + 1;
            pally = true;
        }
        else{
            break;
        }
    }
    if(pally==true){
        printf("palindrome");}
    else{
        printf("not palindrome");
    }    

    return 0;

    }