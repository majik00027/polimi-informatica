#include <stdio.h>

/*

Lista insert, operazioni sopportate:
insert, pop, cut, search, showAll
append (aggiunge un elemento in coda)

*/

struct el {
  int value;
  struct el * next;
};

typedef struct el node;

node * new(int value){ //create a new list with one element
  node * root = malloc(sizeof(node));
  if (root == NULL){
    printf("Not enough memory");
    return NULL;}
  root->value = value;
  return root;
}

void showAll(node * root){
  while(root != NULL){
    printf ("%d ", root->value);
    root = root->next;}
  printf ("\n");
}

node * insert(node * root, int value){
  if(root == NULL)
    return new(value);
  node * newNode = new(value);
  newNode->next = root->next;
  root->next = newNode;
  return root;
}

node * append(node * root, int value){
  if(root == NULL)
    return new(value);
  node * temp = root;
  while(temp->next != NULL){
    temp = temp->next;}
  temp->next = new(value);
  return root;
}

node * search(node * root, int value){
  if(root == NULL)
    return NULL;
  while(root->next != NULL){
    if(root->value == value)
      return root;
    root = root->next;
  }
  return NULL;
}

node * pop(node * root){
  if(root == NULL)
    return NULL;
  node * temp = root->next;
  free(root);
  return temp;
}

node * cut(node * root){
  if(root==NULL)
    return NULL;
  if(root->next == NULL){
    free(root);
    return NULL;}
  node * temp = root;
  while(root->next->next != NULL){
    root = root->next;}
  free(root->next);
  root->next = NULL;
  return temp;
}

node * new(node * root){
  node * new_list;
  while(root->next != NULL){
    new_list = append(new_list, root->value);    
  }
  return new_list;
}

int main(){
  node * root = append(NULL, 5);
  showAll(root);
  append(root, 4);
  showAll(root);
  insert(root, 8);
  showAll(root);
  append(root, 6);
  showAll(root);
  showAll(search(root, 4));
  root = pop(root);
  showAll(root);
  cut(root);
  showAll(root);
  cut(root);
  showAll(root);
  cut(root);
  showAll(root);
  return 0;
}
