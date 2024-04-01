// w W r >
#include <stdio.h>
int main()
{
    int a = 10, b = 24;
    int c = 49, d = 67;
    int sum = a + b;
    int sub = a - b;
    float dvd = b * 1.0 / a;
    int mod1 = b % a;
    int mod2 = a % b;
    int Logic1 = mod1 && mod2;
    int Logic2 = mod1 || mod2;
    int Logic3 = mod1 ^ mod2;
    float d1 = c * 0.1 / d;
    float d2 = d * 0.1 / c;
    float d3 = d1 * 0.1 / d2;
    printf("Sum=%d\n", sum);
    printf("Sub=%d\n", sub);
    printf("Dvd=%f\n", dvd);
    printf("Mod=%d\n", mod1);
    printf("Mod2=%d\n", mod2);
    printf("Eve=%f\n", d1);
    printf("Eve2=%f\n", d2);
    printf("d3=%0.2f\n", d3);
    printf("%d  && %d =%d\n", mod1, mod2, Logic1);
    printf("%d  || %d =%d\n", mod1, mod2, Logic2);
    printf("%d  ^^ %d =%d\n", mod1, mod2, Logic3);
    int nu = 10;
    if (nu == 10)
    {
        printf("%d is ok", nu);
    }
    else
    {
        printf("%d is not ok", nu);
    }
    int num;
    scanf("%d", &num);
    if (num < 0 || num > 100)
    {
        printf("\nresult is unvaalid\n");
    }
    else if (num >= 80 && num <= 100)
    {
        printf("\nA+");
    }
    else if (num >= 70 && num <= 79)
    {
        printf("\nA");
    }
    else if (num >= 60 && num <= 69)
    {
        printf("\nA-");
    }
    else if (num >= 50 && num <= 59)
    {
        printf("\nB+");
    }
    else if (num >= 40 && num <= 49)
    {
        printf("\nC");
    }
    else if (num > 39 && num < 33)
    {
        printf("\nD");
    }
    else
    {
        printf("\nFaild");
    }

    // nested if/else
    int balance;
    scanf("%d", &balance);
    if (balance >= 5000)

    {
        printf("\nI will go to coxbazar");
        if (balance >= 3000)
        {
            printf("\nI will go to sentmartin");
            if (balance >= 1500)
            {
                printf("\nI will eat sea food");
            }
            else
            {
                printf("\nI will buy a half pant");
            }
        }
        else
        {
            printf("\nI will  back to  to Dhaka");
        }
    }

    else
    {
        printf("\nI will  not go any where");
    }

    int mk1=90,mk2=100;
    float mk1_1= mk1*1.0/mk2;
    printf("\nmK=%0.2f",mk1_1);

    

}
