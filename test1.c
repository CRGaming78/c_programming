#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = newNode;
    return newNode;
}

struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    struct Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return newNode;
}

struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    struct Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}

struct node* insertAtPosition(struct node *head, int pos, int data){
    
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    
    if(pos==1){
        newNode->next = head;
        head = newNode;
        return head;
    }
    
    struct node *temp = head;
    int i;
    for(i=0; i<pos-2; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
    
}

struct node* deleteAtBeginning(struct node *head){
    
    if(head == NULL){
        printf("The list is empty!\n");
        return head;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
    
}

struct node* deleteAtEnd(struct node *head){
    
    if(head == NULL){
        printf("The list is empty!\n");
        return head;
    }
    
    
    if(head->next==NULL){
        struct node *temp = head;
        head = NULL;
        free(temp);
        return head;
    }
    struct node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    struct node *temp1 = temp->next;
    temp->next = NULL;
    free(temp1);
    return head;
    
}

struct node* deleteAtPosition(struct node *head, int pos){
    
    if(head == NULL){
        printf("The list is empty!\n");
        return head;
    }
    
    if(pos==1){
        struct node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    
    struct node *temp = head;
    int i;
    for(i=0; i<pos-2; i++){
        temp = temp->next;
    }
    struct node *temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
    return head;   
}

void print(struct node *head){
    while(head!=NULL){
        
        if(head->next == NULL){
            printf("%d\n\n",head->data);
            return;
        }
        printf("%d->",head->data);
        head = head->next;
    }
}

int main() {
    int choice, data, target,pos;
    struct Node* head = NULL;
    while (1) {
        printf("\nCircular Linked List Operations:\n");
        printf("1. Create new node\n");
        printf("2. Insert at beginning\n");
        printf("3. Insert at end\n");
        printf("4. Insert after a specific node\n");
        printf("5. Delete at beginning\n");
        printf("6. Delete at end\n");
        printf("7. Delete a specific node\n");
        printf("8. Display list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                head = createNode(data);
                break;
            case 2:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                head = insertAtBeginning(head, data);
                break;
            case 3:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                head = insertAtEnd(head, data);
                break;
            case 4:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                printf("Enter the target node after which to insert: ");
                scanf("%d", &target);
                head = insertAfter(head, target, data);
                break;
            case 5:
                head = deleteAtBeginning(head);
                break;
            case 6:
                head = deleteAtEnd(head);
                break;
            case 7:
                printf("Enter the node pos to delete: ");
                scanf("%d", &pos);
                head = deleteNode(head,pos);
                break;
            case 8:
                print(head);
                break;
            case 9:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
