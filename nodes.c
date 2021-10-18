
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nodes.h"

struct node { char name[10]; int height; struct node *next;};

void print_list(struct node *n){
  printf("(name: %s, height: %d cm)\n", n->name, n->height);
  if(n->next){
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
  if(n->next){
    free_list(n->next);
  }
  free(n);
  return n;
}
struct node * remove_node(struct node *n, int data){
  if(n->height == data){
    unsigned long temp = n->next;
    n->next = NULL;
    return temp;
  }
  while(n->next){
    if((n->next)->height == data){
      unsigned long temp = n->next;
      n->next = (n->next)->next;
      temp = NULL;
      free(temp);
    }
  }
  return n;
}
