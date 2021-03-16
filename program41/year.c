#include <stdio.h>
int main()
{
    int year;
    int date;
    int total[13] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;
    printf("Enter date: ");
    scanf("%d", &date);
    printf("Enter month: ");
    scanf("%d", &month);
    month = month - 1;
    printf("Enter a year: ");
    scanf("%d", &year);
    int sum = 0;
    int i = 0;
    int week = 0;
    int leap = 0;
    while (i <= month)
    {
        while (i <= month)
        {
            sum = sum + total[i - 1];
            i = i + 1;
        }
        i = i + 1;
        week = sum + date;
    }
    if (month > 1)
    {
        if (year % 400 == 0)
        {
            leap = week + 1;
            printf("It's the %dth day of the year\n", leap);
        }
        if (year % 100 == 0)
        {
            printf("It's the %dth day of the year\n", week);
        }
        if (year % 4 == 0)
        {
            leap = week + 1;
            printf("It's the %dth day of the year\n", leap);
        }
        else
        {
            printf("It's the %dth day of the year\n", week);
        }
    }
    else
    {
        printf("It's the %dth day of the year\n", week);
    }
    return 0;
}