#include <stdio.h>
#include <stdlib.h>

struct subject {
    char sub_name[50];
    int sub_code;
    struct subject *next;
};

int main() {
    int n;
    printf("Enter the number of subjects:");
    scanf("%d", &n);
    struct subject *head;
    for (int i=0;i<n;i++) {
        struct subject *new_sub =(struct subject *)malloc(sizeof(struct subject));
        printf("Enter the name of subject %d:",i+1);
        scanf("%s",new_sub->sub_name);
        printf("Enter subject code:");
        scanf("%d",&new_sub->sub_code);
        new_sub->next = head;
        head = new_sub;
    }
    struct subject *current = head;
    while (current != NULL) {
        printf("Subject Name: %s\n", current->sub_name);
        printf("Subject Code: %d\n", current->sub_code);
        current = current->next;
    }
    current = head;
    while (current != NULL) {
        struct subject *temp = current;
        current = current->next;
        free(temp);
    }
    return 0;
}