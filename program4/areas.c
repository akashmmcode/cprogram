# include <stdio.h>
# include <math.h>

int main(){
    float one,square,triangle,circle,rectangle,length,base,height,radius,width;
    printf("1-square 2-triangle 3-circle 4-rectangle\npick one-");
    scanf("%f",&one);
    if(one == 1){
        printf("Enter length-");
        scanf("%f",&length);
        square = (int)(pow(length,2));
        printf("area of square %.1f",square);}

    else if(one == 2){
        printf("Enter base-");
        scanf("%f",&base);
        printf("Enter height-");
        scanf("%f",&height);
        triangle = 0.5*base*height;
        printf("area of triangle %.1f",triangle);}

    else if(one == 3){
        printf("Enter radius-");
        scanf("%f",&radius);
        circle = 3.14 * (int)(pow(radius,2));
        printf("area of circle %.1f",circle);}

    else if(one == 4){
        printf("Enter width-");
        scanf("%f",&width);
        printf("Enter height-");
        scanf("%f",&height);
        rectangle = width * height;
        printf("area of rectangle %.1f",rectangle);}  

    else{
        printf("enter invalid input");
    }    

   
    return 0;
}