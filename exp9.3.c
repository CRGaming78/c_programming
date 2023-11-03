#include <stdio.h>
union product {
    char name[50];
    float price_per_unit;
    int quantity_purchased;
    float amount_spent;
};
int main() {
    union product product_1;
    printf("Enter product name: ");
    scanf("%s", product_1.name);
    printf("Enter price per unit: ");
    scanf("%f", &product_1.price_per_unit);
    printf("Enter number of quantities purchased: ");
    scanf("%d", &product_1.quantity_purchased);
    product_1.amount_spent = product_1.price_per_unit * product_1.quantity_purchased;
    printf("\nProduct Details:\n");
    printf("Name: %s\n", product_1.name);
    printf("Price per unit: Rs%.2f\n", product_1.price_per_unit);
    printf("Quantity purchased: %d\n", product_1.quantity_purchased);
    printf("Amount spent: Rs%.2f\n", product_1.amount_spent);
    return 0;
}
