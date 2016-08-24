#include <stdio.h>

int main()
{
    int code_product1, code_product2, unit_product1, unit_product2;
    double price_product1, price_product2, value_pay;

    scanf("%d %d %lf", &code_product1, &unit_product1, &price_product1);
    scanf("%d %d %lf", &code_product2, &unit_product2, &price_product2);

    value_pay = unit_product1 * price_product1 + unit_product2 * price_product2;

    printf("VALOR A PAGAR: R$ %0.2lf\n", value_pay);

    return 0;
}
