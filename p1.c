#include <stdio.h>
#include <math.h>
void p1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d", i);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d", n);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i + 1; j++)
        {
            printf("%d", j);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i * 2 - 1);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p7(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d", i);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0 + i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p41(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d\n", i);
            continue;
            ;
        }
        for (int j = 0; j <= i; j++)
        {
            int num = pow(2, i);
            if (j == 0)
            {

                printf("%d ", num);
            }
            else
                printf("%d ", num * 2);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p40(int n)
{
    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
            if (j != i)
                printf("* ");
        }
        printf("%\n");
    }
    printf("%\n");
}
void p39(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= i; j--)
        {
            printf("%d", j);
        }
        if (i > 1)
        {

            for (int j = (i - 1) * 2; j > 0; j--)
            {
                printf(" ");
            }
        }
        for (int j = i; j <= n; j++)
        {
            printf("%d", j);
        }

        printf("%\n");
    }
    printf("%\n");
}
void p38(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = i; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p37(int n)
{
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            printf("%d ", j * i);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p36(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (int j = i - 1; j > 0; j--)
        {
            printf("%d ", j);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p35(int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            printf("%d ", ++count);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p34(int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            printf("%d ", ++count);
        }
        ++i;
        printf("%\n");
    }
    printf("%\n");
}

void p33(int n)
{
    // int count = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j >= 0; j--)
        {
            printf("%d ", (int)pow(2, j));
        }
        printf("%\n");
    }
    printf("%\n");
}
void p32(int n)
{
    // int count = 0;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i * j);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p31(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%c ", 'V');
        }
        printf("%\n");
    }
    printf("%\n");
}
void p30(int n)
{
    int ascii = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k >= 0; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ascii++);
        }
        printf("%\n");
    }
    printf("%\n");
}

void p28(int n)
{
    int ascii = 65;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ascii++);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p29()
{
    char str[6] = "Python";
    for (int i = 1; i <= 6; i++)
    {

        for (int j = 0; j <= i - 1; j++)
        {
            printf("%c", str[j]);
        }
        printf("%\n");
    }
    printf("%\n");
}
void p21(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("%\n");
    }
    printf("%\n");
    for (int i = n; i > 0; i--)
    {

        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("%\n");
    }
    printf("%\n");
}
void p22(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("%\n");
    }
    for (int i = n - 1; i > 0; i--)
    {

        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("%\n");
    }
    printf("%\n");
}
void p23(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k > 0; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("%\n");
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int k = n - 1; k >= i; k--)
        {
            printf(" ");
        }

        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("%\n");
    }
    printf("%\n");
}
void p24(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k > 1; k--)
        {
            printf(" ");
        }

        for (int j = n - i; j >= 0; j--)
        {
            printf("* ");
        }
        printf("%\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i - 1; k >= 0; k--)
        {
            printf(" ");
        }

        for (int j = i; j > 0; j--)
        {
            printf("* ");
        }
        printf("%\n");
    }
    printf("%\n");
}
void p25(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= i; j--)
        {
            printf("*");
        }
        if (i > 1)
        {

            for (int j = (i - 1) * 2; j > 0; j--)
            {
                printf("_");
            }
        }
        for (int j = i; j <= n; j++)
        {
            printf("*");
        }

        printf("%\n");
    }
    printf("%\n");
}
void p26(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i - 1; k >= 0; k--)
        {
            printf(" ");
        }

        for (int j = i; j > 0; j--)
        {
            printf("* ");
        }
        printf("%\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k > 1; k--)
        {
            printf(" ");
        }

        for (int j = n - i; j >= 0; j--)
        {
            printf("* ");
        }
        printf("%\n");
    }
    printf("%\n");
}

int main()
{
    // p1(5);
    // p2(5);
    // p3(5);
    // p4(5);
    // p5(5);
    // p6(5);
    // p7(5);
    // p8(5);
    // p9(5);
    // p10(5);
    // p41(4);
    // p40(4);
    // p39(5);
    // p38(4);
    // p37(6);
    // p36(5);
    // p35(5);
    // p34(5);
    // p33(7);
    // p32(7);
    // p31(5);
    // p30(7);
    // p29();
    // p28(7);
    p27(5);
    // p26(5);

    // p25(5);
    // p24(5);
    // p23(5);
    // p22(5);
    // p21(6);
    return 0;
}