/*
* Tarea 3
* Curso: Estructuras de Datos 2
* Integrantes: Kevyn Quirós, Roberto Fernandez, Marypaz Araya y Diego Salas
*/

#ifndef NODE_H
#define NODE_H

class Node {
  private:
    Node* left;
    Node* right;
    int height;
    int data;
    void setData(int newData) { this->data = newData; };
  public:
    Node(int);
    void setLeft(Node* node) { this->left = node; };
    Node* getLeft() { return this->left; };
    void setRight(Node* node) { this->right = node; };
    Node* getRight() { return this->right; };
    int getHeight() { return this->height; };
    void setHeight(int newHeight) { this->height = newHeight; };
    int getData() { return this->data; };
};

#endif