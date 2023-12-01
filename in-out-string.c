#include <stdio.h>
#include <stdlib.h>
int main() {
    char ch[100];
    char ar1;
    FILE *fptr;
    fptr = fopen("first.txt", "w+");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter string: ");
    scanf("%s", ch);
    fprintf(fptr, "%s", ch);
    rewind(fptr);
    ar1 = fgetc(fptr);
    printf("File Contents: ");
    while (ar1 != EOF){
        printf("%c", ar1);
        ar1 = fgetc(fptr);
    }
    fclose(fptr);   
    return 0;
}