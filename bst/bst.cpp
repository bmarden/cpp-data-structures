#include "bst.hpp"

void Bst::insert(int val) {
  Node* curNode = root;
  if (curNode == NULL) {
    Node* newNode = new Node(val);
    root = newNode;
    return;
  }

  insert(curNode, val);
}

void Bst::insert(Node* node, int val) {
  if (val < node->value) {
    if (node->left == NULL) {
      node->left = new Node(val);
    } else {
      insert(node->left, val);
    }
  } else if (val >= node->value) {
    if (node->right == NULL) {
      node->right = new Node(val);
    } else {
      insert(node->right, val);
    }
  }
}

void Bst::inOrderTraverse() {
  inOrderTraverse(root);
}

void Bst::inOrderTraverse(Node* node) {
  if (node == NULL) {
    return;
  }
  inOrderTraverse(node->left);
  cout << node->value << endl;
  inOrderTraverse(node->right);
}