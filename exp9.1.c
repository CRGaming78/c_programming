#include <stdio.h>
struct product {
    char name[50];
    float price;
    int qty_purchased;
    float amount;
};
int main() {
    struct product purch_prod;
    printf("Enter product name: ");
    scanf(" %s", purch_prod.name);
    printf("Enter price per unit: Rs ");
    scanf("%f", &purch_prod.price);
    printf("Enter number of quantities purchased: ");
    scanf("%d", &purch_prod.qty_purchased);
    purch_prod.amount = purch_prod.price * purch_prod.qty_purchased;
    struct product *product_ptr = &purch_prod;
    printf("\nProduct Details:");
    printf("Name: %s\n", product_ptr->name);
    printf("Price per unit: Rs%.2f\n", product_ptr->price);
    printf("Quantity purchased: %d\n", product_ptr->qty_purchased);
    printf("Amount spent: Rs%.2f\n", product_ptr->amount);
    return 0;
}