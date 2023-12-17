#include <stdio.h>
#include <stdlib.h>
struct Example {
    int id;
    char name[20];
    double prices[];  // Flexible Array Member
};
int main() {
    // Creating a struct with a flexible array member
    struct Example *item = malloc(sizeof(struct Example) + 3 * sizeof(double));
    if (item == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    // Accessing the members of the struct
    item->id = 1;
    snprintf(item->name, sizeof(item->name), "Product A");
    // Accessing the flexible array member
    item->prices[0] = 10.99;
    item->prices[1] = 19.99;
    item->prices[2] = 5.99;
    // Don't forget to free the allocated memory when done
    free(item);
    return 0;
}