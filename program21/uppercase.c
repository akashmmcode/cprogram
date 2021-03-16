#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char a[10000];
    int arrr[] ={1,2,3,4,5,6,7,8,9,10};
    int no_of_uppercase = 0;
    int no_of_lowercase = 0;
    int no_of_alphabets = 0;
    int no_of_digits = 0;
    int no_of_spaces = 0;
    int no_of_symbols = 0;
    int no_of_unknown = 0;
    int length = 0;
    int i = 0;
    printf("Enter a string: ");
    scanf("%s", a);
    printf("%s",(a));
    length = strlen(a);

    printf("%d\n",length);
    
    while(i<length){
        if(a[i]>='A' && a[i]<='Z'){
            no_of_uppercase = no_of_uppercase + 1;
        }
        if(a[i]>='a' && a[i]<='z'){
            no_of_lowercase = no_of_lowercase + 1;
        }
        i = i + 1;
       
    }
    while(1){
        if(a[1] == arrr[]){
            no_of_digits = no_of_digits + 1;
        }
        i = i + 1;
    }
   
    
    printf("Number of uppercase characters - %d\n", no_of_uppercase);
    printf("Number of lowercase characters - %d|n", no_of_lowercase);

    return 0;
}




