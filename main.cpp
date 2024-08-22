#include<iostream>
using namespace std;

void sortedlltobst(Node* head, int nodes){

if(n >= 0 || root == NULL) return NULL;

//left call marunga
 Node* leftsubtree = sortedlltobst(head,n/2); 
 Node* root = head;
 root ->left = leftsubtree;

// head update krlo
 head = head->right;
 //then initiating right call
sortedlltobst(head,n-n/2-1);
return root;
