#include <stdio.h>  
#include <math.h> 
int main()  
{  
   int input = 0;
   int count=0;  
   int sum = 0;
   int digit = 0;
   printf("Enter a number :\n");    
   scanf("%d",&input);
   int power = input; 
   int n = input;
   int last = input;
   while(power>0)  
   {  
       power=power/10;  
       count=count+1;
   }  
   while(n>0){
       digit = n%10;
       sum = sum + pow(digit,count);
       n = n/10;
   }
   if(input==sum){
       printf("Armstrong\n");
   }
   else{
       printf("Not an amstrong number\n");
   }

   int total = 0;
   int i = 1;
   while(i<input){
       if(input%i==0){
           total = total + i;
           i = i + 1;
       }
       else{
           i = i + 1;
       }
   }

   if(total==last){
       printf("Perfect number\n");
   }
   else{
       printf("Not a Perfect number\n");
   }

   


    return 0;  
}  