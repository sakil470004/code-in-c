#include <bits/stdc++.h>
using namespace std;

int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 +
             y / 400 + t[m - 1] + d) % 7;
}

int main()
{
    int dd,mm,yy,day;
    printf("Enter Your Birth Day \nDD MM YY:");
    scanf("%d%d%d",&dd,&mm,&yy);
    day=dayofweek(dd, mm, yy);

    if(day == 1)
    {
        printf("Monday");
    }
    else if(day == 2)
    {
        printf("Tuesday");
    }
    else if(day == 3)
    {
        printf("Wednesday");
    }
    else if(day == 4)
    {
        printf("Thursday");
    }
    else if(day == 5)
    {
        printf("Friday");
    }
    else if(day == 6)
    {
        printf("Saturday");
    }
    else if(day == 0)
    {
        printf("Sunday");
    }
    printf(" is your Birthday ");

    return 0;
}
