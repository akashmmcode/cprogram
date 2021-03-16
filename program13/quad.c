#include <stdio.h>
#include <math.h>

int main(){
    int a = 0;
    int squareroot = 0;
    int b = 0;
    int bsquare = 0;
    int c = 0;
    float x = 0;
    int fourac = 0;
    int equation1 = 0;
    int equation2 = 0;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);
    printf("Enter c:\n");
    scanf("%d",&c);
    bsquare = pow(b,2) - (4*a*c);
    squareroot = sqrt(bsquare);
    equation1 = (-b+squareroot)/(2*a);
    equation2 = (-b-squareroot)/(2*a);
    printf("Quadratic Equation %d\n",equation1);
    printf("Quadratic Equation %d\n",equation2);
    return 0;
}