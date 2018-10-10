#include "LinkedList.h"

int main(){
  struct node * node1 = malloc(sizeof(struct node));
  struct node * node2 = malloc(sizeof(struct node));
  struct node * node3 = malloc(sizeof(struct node));
  node1 -> i = 44;
  node2 -> i = 98;
  node3-> i= 106;
  node1 -> next = node2;
  node2 -> next = node3;
  printf("------Linked list Before Modification------\n\n");
  print_list(node1);
  printf("\n");
  struct node * start = insert_front(node1, 10);
  printf("------Linked list after insertion of node in the beginning------\n\n");
  print_list(start);
  printf("\n");
  free_list(start);
  printf("------Freed Linked List------\n\n");
  print_list(start);
  return 0;
}
