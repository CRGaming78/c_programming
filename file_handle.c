#include <stdio.h>
#include <stdlib.h>
int main() {
    char name1[100], name2[100];
    char ar1;
    FILE *fptr;
    fptr = fopen("first.txt", "w+");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter your full  name(firstname lastname): ");
    scanf("%s %s", name1, name2);
    fprintf(fptr, "Name: %s %s", name1, name2);
    rewind(fptr);
    ar1 = fgetc(fptr);
    printf("File Contents:\n");
    while (ar1 != EOF){
        printf("%c", ar1);
        ar1 = fgetc(fptr);
    }
    fclose(fptr);   
    return 0;
}