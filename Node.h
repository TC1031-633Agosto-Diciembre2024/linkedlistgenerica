//
// Created by Andrés Torres on 17/09/24.
//

#ifndef NODE_H
#define NODE_H

template<typename T>

class Node {
private:
    T data;
    Node<T>* next;
public:
    Node<T>(T data);
    T getData();
    void setData(T data);
    Node<T>* getNext();
    void setNext(Node<T>* next);
};

#endif //NODE_H
