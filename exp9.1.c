#include <stdio.h>
struct product {
    char name[50];
    float price;
    int qty_purchased;
    float amount;
};
int main() {
    struct product purchased_product;
    printf("Enter product name: ");
    scanf(" %s", purchased_product.name);
    printf("Enter price per unit: ");
    scanf("%f", &purchased_product.price);
    printf("Enter number of quantities purchased: ");
    scanf("%d", &purchased_product.qty_purchased);
    purchased_product.amount = purchased_product.price * purchased_product.qty_purchased;
    struct product *product_ptr = &purchased_product;
    printf("\nProduct Details:");
    printf("Name: %s\n", product_ptr->name);
    printf("Price per unit: Rs%.2f\n", product_ptr->price);
    printf("Quantity purchased: %d\n", product_ptr->qty_purchased);
    printf("Amount spent: Rs%.2f\n", product_ptr->amount);
    return 0;
}