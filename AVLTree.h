/*
* Tarea 3
* Curso: Estructuras de Datos 2
* Integrantes: Kevyn Quirós, Roberto Fernandez, Marypaz Araya y Diego Salas
*/

#ifndef AVLTREE_H
#define AVLTREE_H

#include <string>
#include "Node.h"

using namespace std;

class AVLTree {
  private:
    Node* root;
    Node* insert(int, Node*);
    string inorder(Node*, string);
    string preorder(Node*, string);
    string postorder(Node*, string);
    void setRoot(Node* newRoot) { this->root = newRoot; };
    Node* getRoot() { return this->root; };
    int height(Node*);
  public:
    AVLTree();
    Node* insert(int);
    Node* singleRightRotate(Node*);
    Node* singleLeftRotate(Node*);
    Node* doubleRightRotate(Node*);
    Node* doubleLeftRotate(Node*);
    string getInPreorder();
    string getInPostorder();
    string getInInorder();
};

#endif