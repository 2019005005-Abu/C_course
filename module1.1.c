#include <stdio.h>
/*r w >  */
// Limit of data-type
int main()
{
    long long int a = 100000000;
    long long int b = 1000000000;
    int c = 100000000;
    double f = 200.5555555886756757;
    double d = 200.5555555886756757;
    printf("a=%lld\n", a);
    printf("b=%lld\n", b);
    printf("c=%d\n", c);
    printf("f=%f", f);
    printf("%lf", d);

    int my_num = 100000;
    if (my_num){
        return 1;
    }else{
        return 0;
    }


}