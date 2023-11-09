#include <stdio.h>
union product {
    char name[50];
    float price;
    int qty_purchased;
    float amount;
};
int main() {
    union product product1;
    printf("Enter product name: ");
    scanf("%s", product1.name);
    printf("Enter price per unit: ");
    scanf("%f", &product1.price);
    printf("Enter number of quantities purchased: ");
    scanf("%d", &product1.qty_purchased);
    product1.amount_spent = product1.price*product1.qty_purchased;
    printf("\nProduct Details:");
    printf("Name: %s\n", product1.name);
    printf("Price per unit: Rs%.2f\n", product1.price);
    printf("Quantity purchased: %d\n", product1.qty_purchased);
    printf("Amount spent: Rs%.2f\n", product1.amount_sp);    
    return 0;
}
