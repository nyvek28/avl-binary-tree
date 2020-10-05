#include <string>
#include "Gestor.h"
#include "Node.h"

string Gestor::insert(int data) {
  Node* node = tree->insert(data);
  if(node == NULL) {
    return "Repeated key";
  }
  return to_string(data) + " inserted";
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

string Gestor::test() {
  string message = "";
  message = message + this->insert(7) + "\n";
  message = message + this->insert(14) + "\n";
  message = message + this->insert(28) + "\n";
  message = message + this->insert(5) + "\n";
  message = message + this->insert(9) + "\n";
  message = message + this->insert(8) + "\n";
  message = message + this->insert(21) + "\n";
  message = message + this->insert(3) + "\n";
  message = message + this->insert(15) + "\n";
  message = message + this->insert(24) + "\n";
  message = message + this->insert(100) + "\n";
  message = message + this->insert(1) + "\n";
  message = message + "Test values inserted" + "\n";
  return message;
}