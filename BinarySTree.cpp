#include "binarySTree.h"

using namespace std;

void BinarySearchTree::insert(int value) 
{
    Node* newNode = new Node(value);
    if (root == nullptr) 
    {
        root = newNode;
    }
    else {
        Node* current = root;
        Node* parent = nullptr;

        while (current != nullptr) 
        {
            parent = current;
            if (value < current->data) 
            {
                current = current->leftNext;
            }
            else 
            {
                current = current->rightNext;
            }
        }

        if (value < parent->data) 
        {
            parent->leftNext = newNode;
        }
        else 
        {
            parent->rightNext = newNode;
        }
    }
}

void BinarySearchTree::preOrder(Node* node) 
{
    if (node != nullptr) 
    {
        cout << node->data << " ";
        preOrder(node->leftNext);
        preOrder(node->rightNext);
    }
}

void BinarySearchTree::inOrder(Node* node) 
{
    if (node != nullptr) 
    {
        inOrder(node->leftNext);
        cout << node->data << " ";
        inOrder(node->rightNext);
    }
}

void BinarySearchTree::postOrder(Node* node)
{
    if (node != nullptr) 
    {
        postOrder(node->leftNext);
        postOrder(node->rightNext);
        std::cout << node->data << " ";
    }
}

void BinarySearchTree::insertLinkedList(Node* newNode)
{
    if (root == nullptr) 
    {
        root = newNode;
    }
    else
    {
        Node* current = root;
        while (current->rightNext != nullptr)
        {
            current = current->rightNext;
        }
        current->rightNext = newNode;
    }
}
