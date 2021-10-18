
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node { char name[10]; int height; struct node *next;};

void print_list(struct node *n){
  printf("name: %s\theight: %d cm\n", n->name, n->height);
  if(n->next != NULL){
    print_list(n->next);
  }
}
struct node * insert_front(struct node *n, char title[10], int h){
  struct node *m = malloc(sizeof(struct node));
  strcpy(m -> name, title);
  m -> height = h;
  m -> next = n;
  return m;
}
struct node * free_list(struct node *n){
  if(n->next != NULL){
    free_list(n->next);
  }
  free(n);
  return n;
}
