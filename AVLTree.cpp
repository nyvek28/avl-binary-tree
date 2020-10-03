#include <stddef.h>
#include "AVLTree.h"
#include "Node.h"

AVLTree::AVLTree() {
  this->setRoot(NULL);
};

int AVLTree::height(Node* node) {
    return (node == NULL ? -1 : node->getHeight());
};

Node* AVLTree::insert(int data, Node* root) {
  Node* current = root;

  if (current == NULL) {
    current = new Node(data);
  } else if (current->getData() > data) {
    current->setLeft(insert(data, current->getLeft()));
    if(height(current->getLeft()) - height(current->getRight()) == 2) {
        if(data < current->getLeft()->getData())
            current = singleRightRotate(current);
        else
            current = doubleRightRotate(current);
    }
  } else if (current->getData() < data) {
    current->setRight(insert(data, current->getRight()));
    if(height(current->getRight()) - height(current->getLeft()) == 2) {
        if(data > current->getRight()->getData())
            current = singleLeftRotate(current);
        else
            current = doubleLeftRotate(current);
    }
  }
  current->setHeight(max(height(current->getLeft()), height(current->getRight()))+1);

  return current;
};

void AVLTree::insert(int data) {
  Node* newNode = insert(data, this->root);
  this->setRoot(newNode);
};

Node* AVLTree::singleRightRotate(Node* node) {
    Node* current = node->getLeft();
    node->setLeft(current->getRight());
    current->setRight(node);
    node->setHeight(max(height(node->getLeft()), height(node->getRight()))+1);
    current->setHeight(max(height(current->getLeft()), node->getHeight())+1);
    return current;
};

Node* AVLTree::singleLeftRotate(Node* node) {
    Node* current = node->getRight();
    node->setRight(current->getLeft());
    current->setLeft(node);
    node->setHeight(max(height(node->getLeft()), height(node->getRight()))+1);
    current->setHeight(max(height(node->getRight()), node->getHeight())+1);
    return current;
};

Node* AVLTree::doubleLeftRotate(Node* node) {
    node->setRight(singleRightRotate(node->getRight()));
    return singleLeftRotate(node);
};

Node* AVLTree::doubleRightRotate(Node* node) {
    node->setLeft(singleLeftRotate(node->getLeft()));
    return singleRightRotate(node);
};

string AVLTree::inorder(Node* node, string accumulator) {
  if(node == NULL) {
    return accumulator;
  }
  accumulator = inorder(node->getLeft(), accumulator);
  accumulator = accumulator + "[" + to_string(node->getData()) + "] \n";
  accumulator = inorder(node->getRight(), accumulator);

  return accumulator;
}
string AVLTree::preorder(Node* node, string accumulator) {
  if(node == NULL) {
    return accumulator;
  }
  accumulator = accumulator + "[" + to_string(node->getData()) + "] \n";
  accumulator = preorder(node->getLeft(), accumulator);
  accumulator = preorder(node->getRight(), accumulator);

  return accumulator;
}
string AVLTree::postorder(Node* node, string accumulator) {
  if(node == NULL) {
    return accumulator;
  }
  accumulator = postorder(node->getLeft(), accumulator);
  accumulator = postorder(node->getRight(), accumulator);
  accumulator = accumulator + "[" + to_string(node->getData()) + "] \n";

  return accumulator;
}

string AVLTree::getInInorder() {
  return inorder(this->getRoot(), "");
};

string AVLTree::getInPreorder() {
  return preorder(this->getRoot(), "");
};

string AVLTree::getInPostorder() {
  return postorder(this->getRoot(), "");
};

