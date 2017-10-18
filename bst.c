#include <stdio.h>
#include <string.h>
#include <malloc.h>
struct Node{
  int name;
  struct Node* leftChild;
  struct Node* rightChild;
  // struct Node root = null;
  // leftChild = //lc now points to &x
}Node;

struct Node* insertNode(struct Node* root, int data){
  printf("Bianca\n");
    if(root == NULL){
      root = (Node *)malloc(sizeof(Node));
       //Node* newNode = new Node();
      root->name = data;
      printf("%d\n", root->name);
      root->leftChild = NULL;
      root->rightChild= NULL;
      return root;//CHECK
    }
    else if(data < root->name) {
      root->leftChild = insertNode(root->leftChild, data);
    }
    else{
      root->rightChild = insertNode(root->rightChild, data);
    }
    return root;
};

//int main(){
//printf("Hello\n");
//struct Node* root = NULL;
//insertNode(root,3);
//}

//delete(Node n, String name){

//}

void printAll(struct Node *n){
  printf("Print Method\n");
  //if(n!=NULL){
    printf("inif\n");
    printAll(n->leftChild);
    printf("%d\n", n->name);
    printAll(n->rightChild);
    //}
 }
