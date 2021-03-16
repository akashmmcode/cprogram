#include <stdio.h>
int checkPrimenumber(int n);
int main(){
    int n1;
    int n2;
    int i;
    int flag;
    printf("Enter two positive integers:\n ");
    scanf("%d %d",&n1,&n2);
    printf("Prime numbers between %d and %d are: ",n1,n2);
    for(i = n1 + 1;i<n2;++i){
        flag = checkPrimenumber(i);

        if (flag == 1)
            printf("%d ",i);
        }
        return 0;
    }

int checkPrimenumber(int n){
    int j;
    int flag = 1;
    for(j=2;j<=n/2;++j){
        if(n%j == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}