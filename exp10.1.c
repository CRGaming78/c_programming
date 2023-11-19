#include <stdio.h>
#include <stdlib.h>
struct subject {
    char sub_name[50];
    int sub_code;
};

int main() {
    int n;
    printf("Enter the number of subjects:");
    scanf("%d", &n);
    struct subject *sub = (struct subject *)malloc(n * sizeof(struct subject));
    for (int i=0;i<n;i++){
        printf("Enter the no. of subject %d:",i+1);
        scanf("%s",sub[i].sub_name);
        printf("Enter subject code:");
        scanf("%d",&sub[i].sub_code);
    }
    for (int i=0;i<n;i++){
        printf("Details of subject %d:\n",i+1);
        printf("Subject Name: %s\n",sub[i].sub_name);
        printf("Subject Code: %d\n",sub[i].sub_code);
    }
    free(sub);
    return 0;
}