#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    char s2[100];
    printf("Enter first string: ");
    fgets(s1,sizeof(s2),stdin);
    printf("Enter second string: ");
    fgets(s2,sizeof(s1),stdin);


    int length = 0;
    while(s1[length] != '\0'){
        length = length + 1;
    }
    
    length = length - 1;

    int j = 0;
    while(s2[j] != '\0'){
        s1[length] = s2[j];
        j = j + 1;
        length = length + 1;
    }
    
    s1[length] = '\0';
    printf("after concatenation\n");
    puts(s1);
    return 0;
}
