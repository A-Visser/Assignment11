struct node;
void print_list(struct node *n);
struct node * insert_front(struct node *n, char title[10], int h);
struct node * free_list(struct node *n);
struct node * remove_node(struct node *n, int i);
