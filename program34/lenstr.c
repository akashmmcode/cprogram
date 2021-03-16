#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(s,sizeof(s),stdin);
    while(s[i] != '\0'){
        i = i + 1;
    }
    printf("%d",i);
    return 0;
}
 