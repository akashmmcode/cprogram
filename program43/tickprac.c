#include <stdio.h>

int board(char n)
{
    int i = 0;
    int j = 0;
    int game[6][6] = {{'_', '|', '_', '|', '_'}, {'_', '|', '_', '|', '_',}, {'_', '|', '_', '|', '_'}};
    if (n == 1)
    {
        game[0][0] = 'X';
    }
    if (n == 2)
    {
        game[0][2] = 'X';
    }
    if (n == 3)
    {
        game[0][4] = 'X';
    }
    if (n == 4)
    {
        game[1][0] = 'X';
    }
    if (n == 5)
    {
        game[1][2] = 'X';
    }
    if (n == 6)
    {
        game[1][4] = 'X';
    }
    if (n == 7)
    {
        game[2][0] = 'X';
    }
    if (n == 8)
    {
        game[2][2] == 'X';
    }
    if (n == 9)
    {
        game[2][4] == 'X';
    }



        while (i < 3){
            while(j<18){
            printf("%c", game[i][j]);
            j = j + 1;
        }
        i=i+1;
    
      
}
}

int main()
{
    int i = 0;
    int j = 0;
    int position = 0;
    int flag1 = 0;

    printf("Enter position player one: ");
    scanf("%d", &position);
    flag1 = board(position);

    // if(position == 1){
    //     tit[0][0] = 'X';


    return 0;
}