#include <stdio.h>

int checknumber(char n){
    int flag = 0;
    int j = 0;
    char str[]="abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; str[i] != '\0'; ++i){
        if(n == str[i]){
            flag = i + 1;
        }
        while(j<flag){
            printf("%c", n);
            j = j + 1;
        }
    }
    printf("\n");
}

int main() {
   char str2[100];
   int flag;
   int ch = 0;

   printf("Enter a string: ");
   fgets(str2, sizeof(str2), stdin);   

   for (int k = 0; str2[k] != '\0'; ++k) {
        ch = checknumber(str2[k]);
    }
   // printf("Frequency of %c = %d", ch, count);
   return 0;
}
