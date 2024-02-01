#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node *next;
} *linked_list = NULL;

struct node *create_node(int data)
{
   struct node *new_node = (struct node *)malloc(sizeof(struct node));
   if (new_node==NULL){
      printf("\nOut of memory.\n");
      exit(0);
   }
   new_node->data=data;
   new_node->next=NULL;
   return new_node;
}

void insert_at_beginning(int data)
{
   struct node *new_node=create_node(data);
   if (new_node==NULL){
      printf("\nOut of memory.\n");
      exit(0);
   }
   new_node->next=linked_list;
   linked_list=new_node;
}

void insert_at_end(int data)
{
   struct node *new_node,*currrent_node=linked_list;
   if (new_node==NULL){
      printf("\nOut of memory.\n");
      exit(0);
   }
   while (currrent_node->next!=NULL)
      currrent_node=currrent_node->next;
   new_node=create_node(data);
   currrent_node->next=new_node;
}

void insert_at_position(int data, int position)
{
   struct node *new_node,*current_node=linked_list;
   if (new_node==NULL){
      printf("\nOut of memory.\n");
      exit(0);
   }
   int current_position=0;
   while (++current_position<position-1)
      current_node=current_node->next;
   new_node=create_node(data);
   new_node->next=current_node->next;
   current_node->next=new_node;
}

int delete_from_beginning()
{
   int data;
   struct node *deleted_node=linked_list;
   if (deleted_node==NULL)
      return -1;
   data = deleted_node->data;
   linked_list = linked_list->next;
   free(deleted_node);
}

int delete_from_end()
{
   int data;
   struct node *current_node = linked_list;
   if (current_node == NULL)
      return -1;
   else if (current_node->next == NULL)
   {
      data = current_node->data;
      free(current_node);
      linked_list = NULL;
      return data;
   }
   while (current_node->next->next != NULL)
        current_node = current_node->next;
   data = current_node->next->data;
   free(current_node->next);
   current_node->next = NULL;
}

int delete_from_position(int position)
{
   struct node *deleted_node, *current_node = linked_list;
   int current_position = 0;
   if (current_node == NULL)
      return -1;
   while (++current_position < position - 1)
      current_node = current_node->next;
   deleted_node = current_node->next;
   current_node->next = current_node->next->next;
   free(deleted_node);
}

void print()
{
   struct node *current_node = linked_list;
   while (current_node != NULL)
   {
      printf("%d->", current_node->data);
      current_node = current_node->next;
   }
   printf("NULL\n");
}

int search_node(int key)
{
   struct node *current_node=linked_list;
   int position=1;
   while(current_node!=NULL){
      if(current_node->data==key){
         return position;
      }
      current_node=current_node->next;
      position++;
   }
   return -1;
}

void reverseList() 
{
   struct node* current=linked_list;
   struct node* prev=NULL;
   struct node* next;
   while (current!=NULL){
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
   }
   linked_list=prev;
}

void traverse() 
{
   if(linked_list==NULL){
      printf("List is empty.\n");
      exit(0);
   }
   struct node *current=linked_list;
   printf("List elements: ");
   while (current!=NULL) {
      printf("%d ",current->data);
      current=current->next;
   }
   printf("\n");
}

int main() {
   int choice, data, pos;
   while(1){
      printf("\nLinked List Operations:\n");
      printf("1.Insert at beginning\n");
      printf("2.Insert at end\n");
      printf("3.Insert at position\n");
      printf("4.Delete from beginning\n");
      printf("5.Delete from end\n");
      printf("6.Delete from position\n");
      printf("7.Search\n");
      printf("8.Reverse\n");
      printf("9.Merge\n");
      printf("10.Traverse\n");
      printf("11.Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
         case 1:
            printf("Enter data to insert at beginning: ");
            scanf("%d", &data);
            insert_at_beginning(data);
            break;
         case 2:
            printf("Enter data to insert at end: ");
            scanf("%d", &data);
            insert_at_end(data);
            break;
         case 3:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            printf("Enter position: ");
            scanf("%d", &pos);
            insert_at_position(data, pos);
            break;
         case 4:
            delete_from_beginning();
            break;
         case 5:
            delete_from_end();
            break;
         case 6:
            printf("Enter position to delete: ");
            scanf("%d", &pos);
            delete_from_position(pos);
            break;
         case 7:
            printf("Enter data to search: ");
            scanf("%d", &data);
            search_node(data);
            break;
         case 8:
            printf("Original list:");
            print();
            reverseList();
            break;
         case 9:
            break;
         case 10:
            traverse();
            print();
            break;
         case 11:
            exit(0);
         default:
            printf("Invalid choice\n");
      }
   }
   return 0;
}1