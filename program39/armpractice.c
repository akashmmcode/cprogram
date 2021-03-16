#include <stdio.h>
int main() {
   char str[]="abcdefghijklmnopqrstuvwxyz";
   char ch;
   int count = 0;
   int flag;

   // printf("Enter a string: ");
   // fgets(str, sizeof(str), stdin);

   printf("Enter a character to find its frequency: ");
   scanf("%c", &ch);

   for (int i = 0; str[i] != '\0'; ++i) {
      if (ch == str[i]){
         flag = i+1;
         printf("%d",flag);
         }
      }
   for(int j = 1; j<=flag;++j){
      printf("%c",ch);
   }  

   // printf("Frequency of %c = %d", ch, count);
   return 0;
}