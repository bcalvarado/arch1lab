#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <string.h>

typedef struct Node{
  // char name[60];
  int data;
  struct Node* leftChild;
  struct Node* rightChild;
  // struct Node root = null;
  // leftChild = //lc now points to &x
}Node;




struct Node* createNode(int data){
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->leftChild = NULL;
  newNode->rightChild = NULL;
  return newNode;
};




//Node* root;
struct Node* insertNode(struct Node* root, int data){
  //printf("In insertNode\n");
    if(root == NULL){
      //printf("first\n");
      root = createNode(data);
      //return root;
    }
    else if(data < root->data) {
      //printf("second\n");
      root->leftChild = insertNode(root->leftChild, data);
    }
    else{
      //printf("third\n");
      root->rightChild = insertNode(root->rightChild, data);
    }
    return root;
};

//int main(){
  //printf("Hello\n");
//struct Node* root = NULL;
//root = insertNode(root,3);
//root = insertNode(root,4);
//root = insertNode(root,5);
 //printAll(root);
//};

//delete(Node n, String name){

//}

    void printAll(struct Node* n){
      //printf("In printAll\n");
    if(n!=NULL){
    printAll(n->leftChild);
    printf("%d\n", n->data);
    printAll(n->rightChild);
    }
    //else{
      //printf("Only one");
      //printf("%d\n", n->data);
      //}
}
