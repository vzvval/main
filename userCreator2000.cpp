using namespace::std;
#include <vector>

#include "User.h"
#include "Suscribed.h"
#include "Provider.h"
#include "Admin.h"

//definicion de variables globales
vector <Admin> vecAdmin;
vector <User> vecUser;
vector <Provider> vecProvider;
vector <Suscribed> vecSuscribed;

//definicion de funciones
void CreateUser();
void CreateProvider();
void CreateSuscribed();
void CreateAdmin();

//implemetacion de funciones
void CreateUser(){
    User obj;
    obj.setName();
    obj.setLastname();
    obj.setPhone();
    obj.setID();
    obj.setMail();
    obj.setUserName();
    obj.setPassword();
    vecUser.push_back(obj);
}

void CreateProvider(){
    Provider obj;
    obj.setName();
    obj.setLastname();
    obj.setID();
    obj.setPhone();
    obj.setMail();
    obj.setCompany();
    obj.setNIT();
    obj.setUserName();
    obj.setPassword();
    vecProvider.push_back(obj);
}

void CreateSuscribed(){
    Suscribed obj;
    obj.setName();
    obj.setLastname();
    obj.setID();
    obj.setPhone();
    obj.setMail();
    obj.setUserName();
    obj.setAccountNumber();
    obj.setCode();
    obj.setPassword();
    vecSuscribed.push_back(obj);
}

void CreateAdmin(){
    Admin obj;
    obj.setUserName();
    obj.setPassword();
    vecAdmin.push_back(obj);
}