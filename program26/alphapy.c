#include <stdio.h>
#include <math.h>
int main(){
    int i = 1;
    char input;
    char Alphabet = 'A';
    printf("Enter an Uppercase Alphabet; ");
    scanf("%c",&input);
    while(i<=(input-'A'+1)){
        int j = 1;
        while(j<=i){
            printf("%c",Alphabet);
            j = j + 1;
        }
        Alphabet = Alphabet + 1;
        printf("\n");
        i = i + 1;
    }
    return 0;
}


