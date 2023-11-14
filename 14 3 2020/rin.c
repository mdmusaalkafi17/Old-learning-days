#include<stdio.h>

int main()
{
    double loan_ammount, interest_rate, number_of_years,
    total_ammount, monthly_ammount;

    printf("Loan ammount: ");
    scanf("%lf", &loan_ammount);

    printf("interest rate: ");
    scanf("%lf", &interest_rate);

    printf("number of years: ");
    scanf("%lf", &number_of_years);

    total_ammount = loan_ammount + loan_ammount * number_of_years *interest_rate / 100;
    monthly_ammount = total_ammount / (number_of_years * 12);

    printf("%lf\n", total_ammount);
    printf("%lf", monthly_ammount);

    return 0;
}
