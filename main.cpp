/*
* Tarea 3
* Curso: Estructuras de Datos 2
* Integrantes: Kevyn Quirós, Roberto Fernandez, Marypaz Araya y Diego Salas
*/

#include <iostream>
#include <string>
#include "Gestor.h"

using namespace std;

void print(string message) {
  cout << message << endl;
}

void blankLine() {
  cout << endl;
}

void singleLine(string message) {
  blankLine();
  print(message);
  blankLine();
}

int read(string message) {
  print(message);
  int input;
  cin >> input;
  blankLine();
  return input;
}

int mainMenu() {
  int selection;

  blankLine();
  print("1. Insert");
  print("2. Preorder");
  print("3. Inorder");
  print("4. Postorder");
  print("5. Insert test values");
  print("0. Exit");
  selection = read("Select an option");
  blankLine();

  return selection;
}

int main() {
  Gestor g;
  bool isAppRunning = true;
  int selection;
  string feedback;
  do {
    selection = mainMenu();
    switch(selection) {
      case 0: {
        isAppRunning = false;
        feedback = "Bye!";
        break;
      }
      case 1: {
        int number = read("Type a number:");
        feedback = g.insert(number);
        break;
      }
      case 2: {
        feedback = g.preorder();
        break;
      }
      case 3: {
        feedback = g.inorder();
        break;
      }
      case 4: {
        feedback = g.postorder();
        break;
      }
      case 5: {
        feedback = g.test();
        break;
      }
      default: {
        feedback = "Invalid output";
        break;
      }
    }
    singleLine(feedback);
  } while(isAppRunning);
  return 0;
}