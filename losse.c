#include<stdio.h>

struct node
{
   int id;
   struct node *next; 
};
struct node *start=NULL;

void create(){
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    
    printf("Enter the data value for the node:\t");
    scanf("%d",&temp->id);
    temp->next=NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        ptr=start;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void insert_big(){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if (temp==NULL){
        printf("\nOut of memory.\n");
        exit(0);
    }
    printf("Enter the data value for the node:\t");
    scanf("%d",&temp->id);
    temp->next=NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        temp->next=start;
        start=temp;
    }
}

void insert_end(struct node *temp){
    struct node *ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    if (temp==NULL){
        printf("\nOut of memory.\n");
        exit(0);
    }
    printf("Enter the data value for the node:\t");
    scanf("%d",&temp->id);
    temp->next=NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        ptr=start;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void insert_pos(){
    struct node *ptr,*temp;
    int i=1,pos;
    
}