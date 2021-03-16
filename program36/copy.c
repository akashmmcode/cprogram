#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    char s2[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(s1,sizeof(s1),stdin);
    while(s1[i] != '\0'){
        s2[i] = s1[i];
        i = i + 1;
    }
    s2[i] = '\0';
    printf("%s",s2);
    return 0;
}