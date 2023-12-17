#include<stdio.h>

int factorial(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial can't be negative.");
        return 1;
    }
    else if(n==0 || n==1){
        printf("Factorial = 1 \n");
        return 0;
    }
    else {
        int fact=1;
        for(int i=1; i<=n; i++){
            fact*=i;
        }
        printf("factorial= %d \n", fact);
    }
}

void Prime() {
    int num;
    printf("Enter the number of prime:");
    scanf("%d",&num);
    if (num <= 1) {
        printf("It is not a prime number\n");
        return;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("It is not a prime number\n");
            return;
        }
    }
    printf("It is a prime number\n");
}

void Average() {
    int size;
    printf("\nEnter the size of an array:");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the elements of the array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    if (size <= 0) {
        printf("Error: Empty array. Cannot calculate average.\n");
        printf("Average:0.0");
        return;
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float e=(double)sum / size;
    printf("Average:%.2f", e);
}

void MinMax(){
    int size;
    printf("\nEnter the size of an array:");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the elements of the array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max,min;
    max = min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Max number:%d\nMin number:%d\n",max,min);
}

void reversearray(){
    int n;
    printf("\nEnter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int start=0,end=n-1,temp;
    while (start < end) 
    { 
        temp = arr[start];    
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }
    printf("After Reverse:\n[");
    for (int i=0; i < n; i++){
    printf("%d ", arr[i]);
    }
    printf("]");
}


int main(){
    int a;
    while(a){
    printf("\n---Menu---\n");
    printf("\n1.factorial\n");
    printf("2.Prime\n");
    printf("3.Average of an array\n");
    printf("4.Find the max and min number of an array.\n");
    printf("5.Array Reverse\n");
    printf("6.Exit\n");
    printf("Enter the number:");
    scanf("%d",&a);
        switch (a){
            case 1:
                factorial();
                break;
            case 2:
                Prime();
                break;
            case 3:
                Average();
                break;
            case 4:
                MinMax();
                break;
            case 5:
                reversearray();
                break;
            case 6:
                return 0;
            default:
                printf("Wrong number entered\n");
                break;
        }
    }
    return 0;
}