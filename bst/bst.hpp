#include <iostream>
#include <vector>
using namespace std;

#ifndef BST_H
#define BST_H

struct Node {
  Node() : left(NULL), right(NULL){};
  Node(int val) : value(val){};

  int value;
  Node* left;
  Node* right;
};

class Bst {
 public:
  Bst() : root(NULL){};

  void insert(int val);
  bool contains(int val);
  void remove(int val);
  void inOrderTraverse();

 private:
  Node* root;

  void insert(Node* node, int val);
  void inOrderTraverse(Node* node);
};

#endif