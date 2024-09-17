//
// Created by Andrés Torres on 17/09/24.
//
#include "Node.h"
#include <iostream>
#include "User.h"
template<typename T>
Node<T>::Node(T data) {
    this->data=data;
    next=nullptr;
}
template<typename T>
T Node<T>::getData() {
    return data;
}
template<typename T>
void Node<T>::setData(T data) {
    this->data=data;
}
template<typename T>
Node<T>* Node<T>::getNext() {
    return next;
}
template<typename T>
void Node<T>::setNext(Node<T> *next) {
    this->next=next;
}

template class Node<int>;
template class Node<std::string>;
template class Node<User>;