#include <stdio.h>
#include <math.h>

int main(){
    int add = 0;
    int sub = 0;
    int mul = 0;
    int div = 0;
    int num1 = 0;
    int num2 = 0;
    char input = 0; 
    printf("Type: \n+ add\n- sub\n* multiplication\n/ division\n");
    printf("Enter a symbol:");
    scanf("%c",&input);
    if(input == '+'){
        printf("Enter 2 numbers:");
        scanf("%d %d",&num1,&num2);
        add = num1 + num2;
        printf("Total %d\n",add);}
    else if(input == '-'){
        printf("Enter 2 numbers:");
        scanf("%d %d",&num1,&num2);
        sub = num1 - num2;
        printf("Total %d\n",sub);} 
    else if(input == '*'){
        printf("Enter 2 numbers:");
        scanf("%d %d",&num1,&num2);
        mul = num1 * num2;
        printf("Toatl %d\n",mul);}
    else if(input == '/'){
        printf("Enter 2 numbers:");
        scanf("%d %d",&num1,&num2);
        div = num1/num2;
        printf("Toatl %d\n",div);} 
    else{
        printf("Invalid input");
    }       

    return 0; 

}