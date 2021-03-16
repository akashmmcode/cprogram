#include <stdio.h>
int main(){
    char str[1000];
    char ch;
    int count = 0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c",&ch);
    int i = 0;
    while(str[i] != '\0'){
        if(ch == str[i])
        count = count + 1;
        i = i + 1;
    }
    printf("frequency of %c = %d",ch,count);
    return 0;

}