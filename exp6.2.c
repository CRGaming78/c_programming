#include <stdio.h>

void autoSpecifier() {
    auto int autoVar = 10;
    printf("Auto Variable: %d\n", autoVar);
    // Auto variables are automatically allocated and deallocated.
    // They are local to the block where they are declared.
}

void registerSpecifier() {
    register int regVar = 20;
    printf("Register Variable: %d\n", regVar);
}

void staticSpecifier() {
    static int staticVar = 30;
    printf("Static Variable: %d\n", staticVar);
}

void externSpecifier() {
    extern int externVar; // Assume externVar is defined in another file
    printf("Extern Variable: %d\n", externVar);
    // Extern variables are declared but not defined in the current file.
    // They are expected to be defined in another file or scope.
}

int main() {
    int choice;
    do {
        printf("\n1. Auto Storage Class\n");
        printf("2. Register Storage Class\n");
        printf("3. Static Storage Class\n");
        printf("4. Extern Storage Class\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                autoSpecifier();
                break;
            case 2:
                registerSpecifier();
                break;
            case 3:
                staticSpecifier();
                break;
            case 4:
                externSpecifier();
                break;
            case 0:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);
    return 0;
}