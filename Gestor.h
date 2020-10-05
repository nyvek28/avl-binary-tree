/*
* Tarea 3
* Curso: Estructuras de Datos 2
* Integrantes: Kevyn Quirós, Roberto Fernandez, Marypaz Araya y Diego Salas
*/

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