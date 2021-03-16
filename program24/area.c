#include <stdio.h>
#include <math.h>
#include <stdio.h>
int main() {
    int a = 1;
    long b;
    long long c; 
    double e;
    long double f;
    printf("size of int = %zu bytes \n", sizeof(a));
    printf("size of long int  = %zu bytes \n", sizeof(b));
    printf("size of long long int = %zu bytes \n",sizeof(c));
    printf("size of double = %zu bytes \n",sizeof(e));
    printf("size of long double = %zu bytes \n",sizeof(f));

    return 0;
}