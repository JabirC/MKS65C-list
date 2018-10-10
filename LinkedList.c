#include "LinkedList.h"

void print_list(struct node * n){
  struct node * cur = n;
  while (cur) {
    if (cur == n )
         printf("[%d]", cur -> i);
    else printf("-->[%d]", cur -> i);
    cur = cur -> next;
  }
  printf("\n");
}

struct node * insert_front(struct node * n, int val){
   struct node *pointer = malloc(sizeof(struct node));
   pointer -> next = n;
   pointer -> i = val;
   return pointer;

}

struct node * free_list(struct node * n){
    struct node * cur = n;
    struct node * nextNode = cur -> next;
    while(nextNode){
      free(cur);
      cur = nextNode;
      nextNode = cur -> next;
    }
    free(cur);
    return NULL;
}
