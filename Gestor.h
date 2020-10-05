#ifndef GESTOR_H
#define GESTOR_H

#include <string>
#include "AVLTree.h"

using namespace std;

class Gestor {
  private:
    AVLTree* tree = new AVLTree();
  public:
    string insert(int);
    string preorder();
    string inorder();
    string postorder();
    string test();
};

#endif