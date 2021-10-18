#include <stdio.h>
#include "nodes.h"


int main(){
  struct node *n = insert_front(NULL, "Tim", 180);
  n = insert_front(n , "Billy", 170);
  n = insert_front(n, "Harry", 200);
  print_list(n);
  printf("Remove 200");
  print_list(remove_node(n, 200));
  free_list(n);
}
