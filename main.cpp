#include <iostream>

#include "LinkedList.h"
#include "User.h"

int main() {
    LinkedList<int> integerList;
    integerList.insertAtFinish(10);
    integerList.insertAtFinish(20);
    integerList.insertAtFinish(30);
    integerList.insertAtFinish(40);
    integerList.insertAtFinish(50);
    integerList.displayList();
    LinkedList<std::string> stringList;
    stringList.insertAtFinish("Hola");
    stringList.insertAtFinish("Hola1");
    stringList.insertAtFinish("Hola2");
    stringList.insertAtFinish("Hola3");
    stringList.insertAtFinish("Hola4");
    stringList.displayList();
    LinkedList<User> userList;
    userList.insertAtFinish(User("Andres",35));
    userList.insertAtFinish(User("Juan",20));
    userList.displayList();
    return 0;
}
