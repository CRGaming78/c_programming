include<stdio.h>
int triangle_area(int base,int height){
    int area=0;
    area=0.5*height*base;
    printf("Area of triangle: %d\n",area);
}
void swap(int *c,int *d){
    c^=d;
    d^=c;
    c^=d;
}
float remainder(int a, int b){
    int remainder;
    remainder=a/b;
    printf("Remainder of a/b is: %d\n",remainder);
}
int main(){
    int i,j;
    printf("Enter two numbers:");
    scanf("%d %d",&i,&j);
    triangle_area(i,j);
    swap(i,j);
    remainder(i,j);
    return 0;
}