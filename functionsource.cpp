/*******************************************
 * AUTHOR   : GRANT GOLDSWORTH
 * ID	    : 1164709
 * PROJECT  : A5
 * DUE DATE : 2/10/2020
*******************************************/

#include "functions.h"

int * CreateInt() {

    int * address = nullptr;

    address = new int;

    cout << "Enter an integer: ";
    cin >> *address;

    return address;

}

void Populate1DArray(int array[], int numElements) {

    for (int i = 0; i < numElements; i ++ ) {
        cout << "[" << i + 1 << "/" << numElements << "] ";
        array[i] = *CreateInt();
    }

}

