#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replaceWordInFile(const char *filename, const char *oldWord, const char *newWord) {
    FILE *file = fopen(filename, "r+");
    if (file == NULL) {
        printf("Error opening file '%s' for reading and writing.\n", filename);
        return;
    }
    fseek(file, 0, SEEK_END);
    long fileLength = ftell(file);
    rewind(file);
    char *fileContent = (char *)malloc(fileLength + 1);
    if (fileContent == NULL) {
        printf("Memory allocation error.\n");
        fclose(file);
        return;
    }

    fread(fileContent, 1, fileLength, file);
    fileContent[fileLength] = '\0';
    char *foundPosition = strstr(fileContent, oldWord);
    while (foundPosition != NULL) {
        size_t position = foundPosition - fileContent;
        memcpy(fileContent + position, newWord, strlen(newWord));
        foundPosition = strstr(fileContent + position + strlen(newWord), oldWord);
    }
    rewind(file);
    fwrite(fileContent, 1, strlen(fileContent), file);
    fclose(file);
    free(fileContent);
}

int main() {
    char filename[100];
    char oldWord[50];
    char newWord[50];
    printf("Enter the file name: ");
    scanf("%99s", filename); // Limiting input to 99 characters to avoid buffer overflow
    printf("Enter the word to replace: ");
    scanf("%49s", oldWord);
    printf("Enter the new word: ");
    scanf("%49s", newWord);
    replaceWordInFile(filename, oldWord, newWord);
    printf("Word replaced successfully in the file '%s'.\n", filename);
    return 0;
}
