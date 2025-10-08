// RV 7th Financial calculators
#include <stdio.h>

int main() {
    float income, rent, utilities, groceries, transport, savings, remaining;
    printf("Enter monthly income: $"); scanf("%f", &income);
    printf("Rent/Mortgage: $"); scanf("%f", &rent);
    printf("Utilities: $"); scanf("%f", &utilities);
    printf("Groceries: $"); scanf("%f", &groceries);
    printf("Transportation: $"); scanf("%f", &transport);

    savings = income * 0.10;
    remaining = income - (rent + utilities + groceries + transport + savings);

    printf("\n--- Monthly Summary ---\n");
    printf("Savings (10%%): $%.2f\n", savings);
    printf("Remaining to Spend: $%.2f\n", remaining);
    printf("\n--- Percent of Income ---\n");
    printf("Rent: %.1f%%\n", (rent/income)*100);
    printf("Utilities: %.1f%%\n", (utilities/income)*100);
    printf("Groceries: %.1f%%\n", (groceries/income)*100);
    printf("Transportation: %.1f%%\n", (transport/income)*100);
    printf("Savings: %.1f%%\n", (savings/income)*100);

    return 0;
}