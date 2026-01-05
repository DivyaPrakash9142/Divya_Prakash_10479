#include <stdio.h>

int main() {
    float principal, rate, balance, interest;
    int years, i;

    // Input values
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Number of Years: ");
    scanf("%d", &years);

    // Initial balance
    balance = principal;

    // Calculate yearly interest
    for (i = 1; i <= years; i++) {
        interest = balance * rate / 100;
        balance = balance + interest;
    }

    // Final output
    printf("\nFinal Balance after %d years is: %.2f\n", years, balance);

    return 0;
}
 
