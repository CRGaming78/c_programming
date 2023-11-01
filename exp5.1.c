#include<stdio.h>
void armstrong(int i){
    int remainder,originalNum,result=0;
    originalNum = i;
    while (originalNum != 0) {
        remainder=originalNum%10;
        result +=remainder*remainder*remainder;
        originalNum/=10;
    }
    if (result==i)
        printf("%d is an Armstrong number.\n",i);
    else
        printf("%d is not an Armstrong number.\n",i);
}
void coprime(int x){
    /*phle uss number ko reverse karke uss number ka co-prime nikalna*/
    int reverse=0,remainder,num1,num2,j,hcf;
    num1=x;
    while (x!=0){
        remainder=x%10;
        reverse=(reverse*10)+remainder;
        x/=10;
    }
    printf("reverse: %d\n",reverse);
    num2=reverse;
    for(j=1;j<num1;j++){
        if(num1%j==0 && num2%j==0){
            hcf=j;
        }
    }
    if(hcf==1){
            printf("%d and %d are co-prime \n",num1,num2);
    } else {
        printf("%d and %d are not co-prime \n",num1,num2);
    }
}
void factorial(int y){
    int factorial=1,k;
    if (y<0)
        printf("factorial cannot be negative.");
    else if (y==0 || y==1)
        printf("Factorial: %d/n",factorial);
    else {
        for(k=1;k<=y;++k){
            factorial *= k;
        }
        printf("Factorial of %d : %d",y,factorial);
    }
}
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d/n",&a);
    armstrong(a);
    coprime(a);
    factorial(a);
    return 0;   
}
