#include "LinkedList.h"

int main(){
  struct node * start;
  printf("------Empty Linked list Before Modification------\n\n");
  print_list(start);
  printf("\n");

  start = insert_front(start, 5);
  printf("------Linked list after insertion of node with int val [5]------\n\n");
  print_list(start);
  printf("\n");

  start = insert_front(start, 11);
  printf("------Linked list after insertion of node with int val [11]------\n\n");
  print_list(start);
  printf("\n");

  start = insert_front(start, 98);
  printf("------Linked list after insertion of node with int val [98]------\n\n");
  print_list(start);
  printf("\n");
  
  start = free_list(start);
  printf("------Freed Linked List------\n\n");
  print_list(start);
  return 0;
}
