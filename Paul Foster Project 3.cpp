/*
Paul Foster
Project 3
CSDP 250
Dr. Stone


*/



#include <iostream>
#include <cstdlib>
#include <ctime>
#include "binarySTree.h"

using namespace std;

int main() 
{

    srand(time(0)); // So numbers won't be the same after every run.

    BinarySearchTree bst;
    cout << "35 random numbers: ";

    
    for (int i = 0; i < 35; ++i)
    {
        int randomNum = rand() % 100 + 1;  
        bst.insert(randomNum);
        cout << randomNum << " ";
    }
    cout << " " << endl;

    
    cout << "Pre-order Traversal: \n";
    bst.preOrder(bst.root);

    cout << " " << endl;

    cout << endl;

    cout << "In-order Traversal: \n";
    bst.inOrder(bst.root);

    cout << " " << endl;


    cout << endl;

    cout << "Post-order Traversal: " << endl;
    bst.postOrder(bst.root);

    return 0;
}

