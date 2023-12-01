#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE *file;
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    file = fopen("numbers.txt", "w+");
    if (file == NULL) {
        printf("Error creating the file.\n");
        return 1;          // void pe exit use hota hai, yaad rakhna
    }
    printf("Enter %d integers to write to the file:\n", n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        fprintf(file, "%d ", num);
    }
    rewind(file);
    int numbers[n];
    for (int i = 0; i < n; i++) {
        fscanf(file, "%d", &numbers[i]);
    }
    bubbleSort(numbers, n);
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    fclose(file);
    printf("\n");
    return 0;
}