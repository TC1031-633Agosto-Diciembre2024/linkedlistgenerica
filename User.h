//
// Created by Andrés Torres on 17/09/24.
//

#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;
class User {
private:
    string name;
    int age;
public:
    User(string name,int age);
    User();
    friend std::ostream& operator<<(std::ostream& os,const User& u) {
        os<<"Name: "<<u.name<<" Age: "<<u.age;
        return os;
    }
    bool operator==(const User& other) const {
        return (name==other.name && age==other.age);
    }
    bool operator!=(const User& other) const {
        return (name!=other.name || age!=other.age);
    }
};


#endif //USER_H
