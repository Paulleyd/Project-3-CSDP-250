

#ifndef BINARYSTREE_H
#define BINARYSTREE_H

#include <iostream>
#include <cstdlib>
#include <ctime>

class Node 
{
public:
    int data;
    Node* leftNext;
    Node* rightNext;

    Node(int value)
    {
        data = value;
        leftNext = nullptr;
        rightNext = nullptr;
    }
};

class BinarySearchTree
{
public:
    Node* root;

    BinarySearchTree()
    {
        root = nullptr;
    }

    void insert(int value);
    void preOrder(Node* node);
    void inOrder(Node* node);
    void postOrder(Node* node);
    void insertLinkedList(Node* newNode);
};

#endif
