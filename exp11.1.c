#include<stdio.h>
#include<stdlib.h>
int main (){
    FILE *f1,*f2,*f3;
    f1 = fopen("File1.txt", "r");
    f2 = fopen("File2.txt", "r");
    f3 = fopen("File3.txt", "r");
    if (f1 == NULL || f2 == NULL || f3 == NULL){
        puts("Can't open file.");
    }
    char ch;
    while (ch ==EOF){
        ch=fgetc(f1);
        fputc(ch,f2);
    }
    while (ch == EOF){
        ch=fgetc(f2);
        fputc(ch,f3);
    }
    return 0;
}