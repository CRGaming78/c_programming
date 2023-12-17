#include<stdio.h>
void Buuble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                arr[j] ^= arr[j + 1] ^= arr[j] ^= arr[j + 1];
}

void select_sort(int arr[],int n){
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        int temp;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex] = temp;
    }
}

void insertionSort(int arr[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    printf("After sorting:[");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main(){
    int a,b;
    printf("Enter the size of an array(1-100):");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements of array:\n"); 
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter which soring you want to do:\n");
    printf("1.Buuble sort\n");
    printf("2.Select sort\n");
    printf("3.Insertion sort\n");
    scanf("%d",&b);

    switch (b)
    {
    case 1:
        Buuble_sort(arr,a);
        break;
    case 2:
        select_sort(arr,a);
        break;
    case 3:
        insertionSort(arr,a);
        break;
    default:
        printf("Invalid number entered.");
        break;
    }
    printArray(arr,a);
    return 0;
}