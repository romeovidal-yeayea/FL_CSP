//RV 7th Update Calc

#include <stdio.h>





void getInputs(float *income, float *rent, float *utilities, float *groceries, float *transportation) {

    printf("Enter your monthly income: ");

    scanf("%f", income);

    printf("Enter your monthly rent/mortgage: ");

    scanf("%f", rent);

    printf("Enter your monthly utilities: ");

    scanf("%f", utilities);

    printf("Enter your monthly groceries: ");

    scanf("%f", groceries);

    printf("Enter your monthly transportation: ");

    scanf("%f", transportation);

}





void displayPercentages(float income, float rent, float utilities, float groceries, float transportation) {

    float rentPercent = (rent / income) * 100;

    float utilPercent = (utilities / income) * 100;

    float grocPercent = (groceries / income) * 100;

    float transPercent = (transportation / income) * 100;

    float savings = income * 0.10; // 10% savings

    float spending = income - (rent + utilities + groceries + transportation + savings);



    printf("\nYour rent is $%.2f and that is %.0f%% of your income.\n", rent, rentPercent);

    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, utilPercent);

    printf("Your groceries are $%.2f and that is %.0f%% of your income.\n", groceries, grocPercent);

    printf("Your transportation is $%.2f and that is %.0f%% of your income.\n", transportation, transPercent);

    printf("You should save $%.2f a month, that is 10%% of your income.\n", savings);

    printf("You have $%.2f of spending money each month!\n", spending);

}



int main() {

    

    float income, rent, utilities, groceries, transportation;



    

    getInputs(&income, &rent, &utilities, &groceries, &transportation);

    displayPercentages(income, rent, utilities, groceries, transportation);



    return 0;

}
