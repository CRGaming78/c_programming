#include<stdio.h>
int triangle_area(int base,int height){
    int area=0;
    area=0.5*height*base;
    printf("Area of triangle: %d\n",area);
}
void swap(int *a, int *b) {
    if (a != b) {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
    printf("After swapping: num1 = %d, num2 = %d\n", *a, *b);
}

float remainder(int a, int b){
    float remainder=a / b;
    printf("Remainder of a/b is: %.2f\n",remainder);
}

int main(){
    int i,j;
    printf("Enter two numbers:");
    scanf("%d %d",&i,&j);
    triangle_area(i,j);
    swap(&i,&j);
    remainder(i,j);
    return 0;
}
