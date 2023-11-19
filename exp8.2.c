#include<stdio.h>
void select_sort(int arr[], int x){
    int temp;
    for(int i=0;i<(x-1);i++){
        for (int j=i+1;j<x;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nElements after sort:");
    for(int y=0;y<x;y++){
        printf("%d ",arr[y]);
    }
}

void main(){
    int arry[100],a,b;
    printf("Enter the number of elements: ");
    scanf("%d",&b);
    for(a=0;a<b;a++){
        printf("Enter the element %d: ",a);
        scanf("%d",&arry[a]);
    }
    select_sort(arry,b);
}