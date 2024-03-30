#include <stdio.h>

int main() {
    int first_number, last_number, sum, a, b;
    float bank_account;
    char checking_alphabet, p;

    printf("Enter first number and last number separated by a space: ");
    scanf("%d %d", &first_number, &last_number);
    
    printf("Enter bank account balance: ");
    scanf("%f", &bank_account);
    
    // Clear input buffer before reading the character
    while (getchar() != '\n');

    printf("Enter a character for checking: ");
    scanf("%c", &checking_alphabet);
    
    printf("Enter two numbers separated by a comma: ");
    scanf("%d%c,%d%c", &a, &p, &b, &p);

    printf("\nFirst number = %d, Last number = %d\n", first_number, last_number);
    printf("Bank account = %.2f\n", bank_account);
    printf("Checking alphabet = %c\n", checking_alphabet);

    sum = first_number + last_number;
    printf("Sum of %d and %d = %d\n", first_number, last_number, sum);
    
    printf("%d%c%d%c\n", a, p, b, p);

    // Variable and data type
    int rahim = 100;
    int karim = 200;
    float balance = 2.56;
    char ami = 'R';

    printf("%d and %d\n", rahim, karim);
    printf("Balance = %0.2f\n", balance);
    printf("The character is %c\n", ami);

    return 0;
}
