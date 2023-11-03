#include <stdio.h>
struct product {
    char name[50];
    float price_per_unit;
    int quantity_purchased;
    float amount_spent;
};
int main() {
    struct product purchased_product;
    printf("Enter product name: ");
    scanf(" %s", purchased_product.name);
    printf("Enter price per unit: ");
    scanf("%f", &purchased_product.price_per_unit);
    printf("Enter number of quantities purchased: ");
    scanf("%d", &purchased_product.quantity_purchased);
    purchased_product.amount_spent = purchased_product.price_per_unit * purchased_product.quantity_purchased;
    struct product *product_ptr = &purchased_product;
    printf("\nProduct Details:\n");
    printf("Name: %s\n", product_ptr->name);
    printf("Price per unit: Rs%.2f\n", product_ptr->price_per_unit);
    printf("Quantity purchased: %d\n", product_ptr->quantity_purchased);
    printf("Amount spent: Rs%.2f\n", product_ptr->amount_spent);
    return 0;
}