#ifndef bst_include
#define bst_include
struct Node{
  struct Node *leftChild;
  struct Node *righChild;
  int name;
  //char *str;
}Node;


struct Node* createNode(int data);

struct Node* insertNode(struct Node* root, int data);

//void delete(struct Node *n, int name);

void printAll(struct Node* n);



#endif
