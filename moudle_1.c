#include <stdio.h>

int main() {
    // Part 1: Reading inputs
    int Rahim, Kaim, a, b;
    float Ra_balance, Ka_balance;
    char p;

    // Reading inputs for Rahim and Kaim
    scanf("%d %d", &Rahim, &Kaim);

    // Reading inputs for Ra_balance and Ka_balance
    scanf("%f %f", &Ra_balance, &Ka_balance);

    // Reading inputs for a and b with percentage sign
    scanf("%d%c %d%c", &a, &p, &b, &p);

    // Part 2: Printing inputs from Part 1
    printf("Rahim = %d, Kaim = %d\n", Rahim, Kaim);
    printf("Rahim_balance = %0.2f, Kaim_balance = %0.2f\n", Ra_balance, Ka_balance);
    printf("a = %d%%, b = %d%%\n", a, b);

    // Part 3: Reading inputs for second part
    scanf("%d%% %d%%", &Rahim, &Kaim); // Reading percentages for Rahim and Kaim
    int m, n, lm1, lm2;
    scanf("%dm %dn", &m, &n); // Reading meters and dimensions
    scanf("%dlm1 %dlm2", &lm1, &lm2); // Reading lm1 and lm2

    // Part 4: Printing inputs from Part 3
    printf("Rahim vat = %d%%, Kaim Vat = %d%%\n", Rahim, Kaim);
    printf("m = %d meters, n = %d dimensions\n", m, n);
    printf("lm1 = %dlm1, lm2 = %dlm2\n", lm1, lm2);

    return 0;
}
