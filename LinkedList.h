//
// Created by Andrés Torres on 06/09/24.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

template <typename T>
class LinkedList {
private:
    Node<T>* head;
public:
    LinkedList();
    void insertAtStart(T value);
    void insertAtFinish(T value);
    void displayList();
    int findElement(T value);
    void deleteElement(T value);
    ~LinkedList() {
        Node<T>* current=head;
        while(current!=nullptr) {
            Node<T>* temp= current;
            current=current->getNext();
            delete temp;
        }
    }
};

#endif
