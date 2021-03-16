// #include <stdio.h>
// #include <math.h>
// #include <stdbool.h>

// int main(){
//     int score;
//     printf("Enter the score");
//     scanf("%d",&score);

//     while(score < 0 || score > 100){
//         printf("Enter the score");
//         scanf("%d",&score);

//     }
//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main(){
    int response = 0;
    int input_number=0;

    while(response == 0){
        if(response == 0){
            input_number = 0;
            printf("Enter an input: ");
            response = scanf("%d",&input_number);
            printf("Response = %d\n",response);
        }
    }

    printf("Entered number = %d\n", input_number);
    return 0;
}
