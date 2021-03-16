# include <stdio.h>

int main(){
    int length,breadth; 
    printf("Enter length(in m): ");
    scanf("%d",&length);
    printf("Enter breadth(in m): ");
    scanf("%d",&breadth);
    printf("Length - %d m\nBreadth - %d m\n",length,breadth);
    printf("Area - %d sq. m\n",length*breadth);
   
    return 0;
}