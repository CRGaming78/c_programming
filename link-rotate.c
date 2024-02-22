struct ListNode {
    int val;
    struct ListNode *next;
} *link_list=NULL;

struct ListNode* rotateRight(struct ListNode* link_list, int k) {
    struct ListNode new;
    struct ListNode *prev;
    struct ListNode *tail;
    int i,count=0;
    if(link_list == NULL)
        return NULL;
    new.next=link_list;
    prev=&new;
    while(link_list){
        tail=link_list;
        link_list=link_list->next;
        count++;
    }
    linked_list=new.next;
    k%=count;
    for(i = 0; i < count-k; ++i){
        prev = prev->next;
    }
    tail->next = new.next;
    new.next = prev->next;
    prev->next = NULL;
    return new.next;
}












void reverseList(struct node* linked_list) {
    struct ListNode *new=NULL;
    struct ListNode *tmp;
    while(linked_list){
        tmp=linked_list->next;
        linked_list->next=new.next;
        new.next=linked_list;
        linked_list=tmp;
    }
    return new.next;
}