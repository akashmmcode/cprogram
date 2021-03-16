#include <stdio.h>
#include <math.h>

int main(){
    // array to store digits 
    int a[100000]; 
    int i ,j, number_of_digits; 
    printf("Enter the size of array\n:");
    scanf("%d", &number_of_digits); 
    while(i<number_of_digits) { 
        scanf("%d", &a[i]);
        i= i+ 1;
    }
    while(j<number_of_digits)
    {
        printf("%d\t",a[j]);
        j=j+1;
    }
   
    return 0;
}