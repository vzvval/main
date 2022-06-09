//
// Created by val on 6/8/2022.
//

#include <iostream>
#include <vector>
using namespace::std;

#include "User.h"
#include "Suscribed.h"
#include "Provider.h"
#include "Admin.h"

#include "userCreator2000.cpp"
#include "Menus.cpp"

void login(){
    string username, password;
    int type;

    Admin adm;
    User usr;
    Provider prv;
    Suscribed ssd;

    cout << "Input you user's type code: \n";
    cout << "1. Admin, 2. Common, 3. Suscribed, 4. Provider\n";
    cin >> type;
    //limpiar pantalla

    fflush(stdin);
    cout << "Input your username: ";
    getline(cin, username);
    fflush(stdin);
    cout << "Input your password: ";
    getline(cin, password);

    switch(type){
        case 1: for(int i = 0; i < vecAdmin.size(); i++){
                    adm = vecAdmin[i];
                    if(username == adm.getUserName()){
                        if(password == adm.getPassword()){
                            menuAdmin();
                        } else {
                            cout << "Incorrect password\n";
                            login();
                        }
                    } else {
                        cout << "Incorrect username\n";
                        login();
                    }
                };
            break;
        case 2: for(int i = 0; i < vecUser.size(); i++){
                    usr = vecUser[i];
                    if(username == usr.getUserName()){
                        if(password == usr.getPassword()){
                            //menuUser();
                        } else {
                            cout << "Incorrect password\n";
                            login();
                        }
                    } else {
                        cout << "Incorrect username\n";
                        login();
                    }
                };
            break;
        case 3: for(int i = 0; i < vecSuscribed.size(); i++){
                    ssd = vecSuscribed[i];
                    if(username == ssd.getUserName()){
                        if(password == ssd.getPassword()){
                            //menuSuscribed();
                        } else {
                            cout << "Incorrect password\n";
                            login();
                        }
                    } else {
                        cout << "Incorrect username\n";
                        login();
                    }
                };
            break;
        case 4: for(int i = 0; i < vecProvider.size(); i++){
                    prv = vecProvider[i];
                    if(username == prv.getUserName()){
                        if(password == prv.getPassword()){
                            //menuProvider();
                        } else {
                            cout << "Incorrect password\n";
                            login();
                        }
                    } else {
                        cout << "Incorrect username\n";
                        login();
                    }
                };
            break;
    }
}