#include <stdio.h>
char game[19] = {'_', '|', '_', '|', '_', '\n', '_', '|', '_', '|', '_', '\n', '_', '|', '_', '|', '_', '\n'};
char point = 'X';
int player = 1;

int board(int n)
{
    int i = 0;
    int j = 0;

    if (n == 1)
    {
        if (game[0] == 'X' || game[0] == 'O')
        {
            printf("PLEASE ENTER A DIFFERENT POSITION\n");
            return 0;
        }
        if (game[0] == '_')
            game[0] = point;
    }
    else if (n == 2)
    {
        if (game[2] == 'X' || game[2] == 'O')
        {
            printf("PLEASE ENTER A DIFFERENT POSITION\n");
            return 0;
        }
        if (game[2] == '_')
            game[2] = point;
    }
    else if (n == 3)
    {
        if (game[4] == 'X' || game[4] == 'O')
        {
            printf("PLEASE ENTER A DIFFERENT POSITION\n");
            return 0;
        }
        if (game[4] == '_')
            game[4] = point;
    }
    else if (n == 4)
    {
        if (game[6] == 'X' || game[6] == 'O')
        {
            printf("PLEASE ENTER A DIFFERNT POSITION\n");
            return 0;
        }
        if (game[6] == '_')
            game[6] = point;
    }
    else if (n == 5)
    {
        if (game[8] == 'X' || game[8] == 'O')
        {
            printf("PLEASE ENTER A DIFFERENT POSITION\n");
            return 0;
        }
        if (game[8] == '_')
            game[8] = point;
    }
    else if (n == 6)
    {
        if (game[10] == 'X' || game[10] == 'O')
        {
            printf("PLEASE ENTER A DIFFERENT POSITION\n");
            return 0;
        }
        if (game[10] = '_')
            game[10] = point;
    }
    else if (n == 7)
    {
        if (game[12] == 'X' || game[12] == 'O')
        {
            printf("PLEASE ENTER A DIFFERENT POSITION\n");
            return 0;
        }
        if (game[12] == '_')
            game[12] = point;
    }
    else if (n == 8)
    {
        if (game[14] == 'X' || game[14] == 'O')
        {
            printf("PLEASE ENTER A DIFFERENT POSITION\n");
            return 0;
        }
        if (game[14] == '_')
            game[14] = point;
    }
    else if (n == 9)
    {
        if (game[16] == 'X' || game[16] == 'O')
        {
            printf("PLEASE ENTER A DIFFERENT POSITION\n");
            return 0;
        }
        if (game[16] == '_')
            game[16] = point;
    }
    else
    {
        printf("\n\nINVALID INPUT\n\n");
    }

    i = 0;
    while (i < 19)
    {
        if (point == 'X' && player == 1)
        {
            point = 'O';
            player = 2;
        }
        else
        {
            point = 'X';
            player = 1;
        }
        printf("%c", game[i]);
        i = i + 1;
    }
    return 1;
}

int winner()
{
    int flag2 = 0;
    if (game[0] == game[2] && game[4] == game[2] && game[0] != '_')
    {
        flag2 = 1;
    }
    else if (game[6] == game[8] && game[10] == game[6] && game[6] != '_')
    {
        flag2 = 1;
    }
    else if (game[12] == game[14] && game[16] == game[12] && game[12] != '_')
    {
        flag2 = 1;
    }
    else if (game[0] == game[6] && game[12] == game[0] && game[0] != '_')
    {
        flag2 = 1;
    }
    else if (game[2] == game[8] && game[14] == game[8] && game[8] != '_')
    {
        flag2 = 1;
    }
    else if (game[4] == game[10] && game[16] == game[4] && game[4] != '_')
    {
        flag2 = 1;
    }
    else if (game[0] == game[8] && game[16] == game[0] && game[16] != '_')
    {
        flag2 = 1;
    }
    else if (game[4] == game[8] && game[12] == game[4] && game[4] != '_')
    {
        flag2 = 1;
    }
    return flag2;
}

int winner();
int main()
{
    int i = 1;
    int j = 0;
    int position = 0;
    int flag1 = 0;
    int flag2 = 0;
    int fix;
    while (i < 10)
    {
        printf("\nPLAYER-%d (%c) ENTER POSITION\n ", player, point);
        scanf("%d", &position);
        flag1 = board(position);
        flag2 = winner();
        if (flag2 == 1)
        {
            printf("PLAYER-%d IS THE WINNER\n", player - 1);
            break;
        }
        if (flag1 == 1)
            i = i + 1;
    }
    printf("ITS A TIE\n");
        if (flag1 == 1)
            i = i + 1;
    }
    printf("ITS A TIE\n");
    return 0;
}
