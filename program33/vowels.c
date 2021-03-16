#include <stdio.h>
int main(){
    char line[150];
    int vowels = 0;
    int consonents = 0;
    int digits = 0;
    int space = 0;
    printf("Enter a string: ");
    fgets(line,sizeof(line),stdin);

    for(int i = 0; line[i] != '\0'; ++i){
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u'||
        line[i]=='A' || line[i] =='E'|| line[i]=='I'||line[i] =='O'||line[i]=='U'){
            vowels = vowels + 1;}

        else if((line[i]>='a'&&line[i]<='z') || (line[i]>='A'&&line[i]<='Z')){
            consonents = consonents + 1;}

        else if(line[i]>='0'&& line[i]<='9'){
            digits = digits + 1;}
            
        else if(line[i] == ' '){
            space = space + 1;
        }
    }
    printf("vowels %d\n",vowels);
    printf("consonents %d\n",consonents);
    printf("digits %d\n",digits);
    printf("space %d\n",space);

    return 0;
}
