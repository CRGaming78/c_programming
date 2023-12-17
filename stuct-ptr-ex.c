#include <stdio.h>
struct ExampleStruct {
    char charVar;       // 1 byte
    int intVar;         // 4 bytes
    double doubleVar;   // 8 bytes
};

int main() {
    struct ExampleStruct exampleInstance;
    // Print the memory addresses of each member
    printf("Address of charVar: %p\n", (void*)&exampleInstance.charVar);
    printf("Address of intVar: %p\n", (void*)&exampleInstance.intVar);
    printf("Address of doubleVar: %p\n", (void*)&exampleInstance.doubleVar);

    return 0;
}

//Address of charVar: 0x7ffd90edd210
//Address of intVar: 0x7ffd90edd214 (difference between intVar and charVar is 4 )
//Address of doubleVar: 0x7ffd90edd218 (difference between doubleVar and charVar is 8)