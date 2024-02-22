#include<stdio.h>

void select_sort(int arr[],int n){
    for (int i=0;i<n-1;i++) {
        int minIndex = i;
        int temp;
        for (int j=i+1;j<n;j++){
            if (arr[j] < arr[minIndex]) {
                minIndex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex] = temp;
    }
}

void printArray(int arr[],int n){
    printf("Array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int linear_search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("The number is at %d",i+1);
        }
    }
}

int main(){ 
    int a,b;
    printf("\n----Menu----\n");
    printf("1.Insert an element at disired location.\n");
    printf("2.delete an element from the desired location.\n");//done
    printf("3.Search for an element using leaner Search.\n"); //done but, agar vo element nahi mila toh uska print wala nahi dala hu
    printf("4.search for an element using Binary Search\n"); //to be done
    printf("5.Sort an array using Selection sort.\n"); //done
    printf("6.Sort an array using bubble sort.\n"); //done
    printf("Enter your options:");
    scanf("%d",&a);
    int arr[100];
    printf("\nEnter the size of the array:");
    scanf("%d",&b);
    printf("Enter tthe elements of the array:");
    for(int i=0;i<b;i++){
        scanf("%d",&arr[i]);
    }
    switch(a){
    case 1:
        int e,p;
        printf("Enter the element you want to add:");
        scanf("%d",&e);
        printf("Enter the position of element you want to:");
        scanf("%d",&p);
        arr[b]=0;
        b++;
        for(int i=b;i>=p;i--){
            arr[i]=arr[i-1];
        }
        arr[p]=e;
        printArray(arr,b);
        break;
    case 2:
        int pos;
        printf("Enter the position of the element you want to delete:");
        scanf("%d",&pos);
        for(int i=pos;i<b-1;i++){
            arr[i] =arr[i+1];
        }
        b--;
        printArray(arr,b);
        break;
    case 3:
        int c;
        printf("Enter the number to search:");
        scanf("%d",&c);
        linear_search(arr,b,c);
        break;
    case 4:
        break;
    case 5:
        select_sort(arr,b);
        printArray(arr,b);
        break;
        printArray(arr,b);
        break;
    default:
        printf("Wrong number entered.");
    }
    return 0;
}