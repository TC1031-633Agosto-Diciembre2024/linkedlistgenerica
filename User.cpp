//
// Created by Andrés Torres on 17/09/24.
//
#include "User.h"

User::User() {
    name="";
    age=0;
}
User::User(string name, int age) {
    this->name=name;
    this->age=age;
}