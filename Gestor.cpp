#include <string>
#include "Gestor.h"

string Gestor::insert(int data) {
  tree->insert(data); 
  return "Value inserted";
};

string Gestor::preorder() {
  string message = tree->getInPreorder();
  return message;
};

string Gestor::inorder() {
  string message = tree->getInInorder();
  return message;
};

string Gestor::postorder() {
  string message = tree->getInPostorder();
  return message;
};