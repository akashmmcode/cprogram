#include <stdio.h>
int main(){
    int a[2][2][3];
    for(int i =0;i<2;++i){
        for(int j = 0;j<2;++j){
            for(int k = 0;k<3;++k){
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    printf("displaying values\n");
    for(int i =0;i<2;++i){
        for(int j = 0;j<2;++j){
            for(int k = 0;k<3;++k){
                printf("a[%d][%d][%d] = %d\n",i,j,k,a[i][j][k]);
            }
        }
    }    
    return 0;
}