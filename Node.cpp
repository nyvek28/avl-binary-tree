/*
* Tarea 3
* Curso: Estructuras de Datos 2
* Integrantes: Kevyn Quirós, Roberto Fernandez, Marypaz Araya y Diego Salas
*/

#include <stddef.h>
#include "Node.h"

Node::Node(int data) {
  this->setData(data);
  this->setHeight(0);
  this->setLeft(NULL);
  this->setRight(NULL);
};