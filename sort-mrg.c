#include<stdio.h>

void merge(int nums1[],int m,int nums2[],int n){
    int i=m-1;
    int j=n-1; 
    int k=m+n-1;
    while (i>=0 && j>=0){
        if (nums1[i]>nums2[j]){
            nums1[k]=nums1[i];
            i--;
        } else {
            nums1[k]=nums2[j];
            j--;
        }
        k--;
    }
    while (j>=0) {
        nums1[k]=nums2[j];
        j--;
        k--;
    }
}

int main(){
    int arr1[100],arr2[100];
    int a,b;
    printf(" Enter the size of array 1 and array 2:");
    scanf("%d %d",&a,&b);
    printf("Enter the element of array 1:");
    for(int i=0;i<a;i++){
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter the elements of array 2:");
    for(int i=0;i<b;i++){
        scanf("%d",&arr2[i]);
    }
    merge(arr1,a,arr2,b);
    printf("After Merge:[");
    for (int i=0;i<a+b;i++) {
        printf("%d ",arr1[i]);
    }
    printf("]");
    return 0;
}   