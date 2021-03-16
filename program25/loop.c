#include <stdio.h>
#include <math.h>
int main(){
    int low = 0;
    int high = 0;
    int flag = 0;
    int i = 0;

    printf("Enter first number");
    scanf("%d",&low);
    printf("Enter second number");
    scanf("%d",&high);
    
    while(low<high){
        flag = 0;

        if(low<=1)
        {
            low = low + 1;
            continue;
        }

        for(i=2;i<=low/2;++i)
        {
            if(low%i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
        printf("%d\n",low);
        }
        low = low + 1;

    }
    return 0;
}
