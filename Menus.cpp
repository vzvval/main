#include <iostream>
#include <vector>

#include "User.h"
#include "Suscribed.h"
#include "Provider.h"
#include "Admin.h" //se supone que esto no lo usa

#include "metods.cpp"
#include "admin_roles.cpp"
using namespace::std;

//definicion de variables y arreglos globales

//Definicion de metodos
void Menu();
void menuAdmin();
void clean();
void inventory();

//Implementacion de metodos

void Menu(){
    int opc;
    do {
        cout << "Welcome to our program, please log in\n";
        cout << "Option menu:\n";
        cout << "----------------\n";
        cout << "1. Login\n";
        cout << "2. Invited\n";
        cout << "3. About\n";
        cout << "0. Exit\n";
        cout << "-> ";
        cin >> opc;
        switch (opc) {
            case 1:
                login();
                break;
            case 0:
                break;

        }
    }while(opc != 0);
}

void menuAdmin(){
    int opc;
    do {
        cout << "Menu for administrators ;3\n";
        cout << "--------------------------\n";
        cout << "1. Clients\n";
        cout << "2. Inventory\n";
        cout << "3. About\n";
        cout << "0. Exit\n";
        cin >> opc;
        switch(opc){
            case 1: clientsFuntions(); break;
            case 0: Menu(); break;
        }
    }while(opc != 0);
}

