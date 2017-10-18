#ifndef bst_include
#define bst_include
struct Node{
  struct Node *leftChild;
  struct Node *righChild;
  int name;
  //char *str;
}Node;

void insertNode(struct Node *node, int name);

void delete(struct Node *n, int name);

void printAll(struct Node *n);



#endif
