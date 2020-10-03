#include <stddef.h>
#include "Node.h"

Node::Node(int data) {
  this->setData(data);
  this->setHeight(0);
  this->setLeft(NULL);
  this->setRight(NULL);
};