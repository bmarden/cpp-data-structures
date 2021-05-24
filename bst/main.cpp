#include <iostream>

#include "bst.hpp"

using namespace std;

int main() {
  Bst bst;

  bst.insert(10);
  bst.insert(5);
  bst.insert(2);
  bst.insert(1);
  bst.insert(5);
  bst.insert(15);
  bst.insert(22);

  bst.inOrderTraverse();

  return 0;
}