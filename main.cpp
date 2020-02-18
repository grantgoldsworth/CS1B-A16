/*******************************************
 * AUTHOR   : GRANT GOLDSWORTH
 * ID	    : 1164709
 * PROJECT  : A5
 * DUE DATE : 2/10/2020
*******************************************/

#include "functions.h"

int main() {

    int * array1D = nullptr;
    int * array2D = nullptr;

    int m1D;
    int m2D;
    int n2D;

    cout << "Enter number of elements for 1D array: ";
    cin >> m1D;

    // the array of pointers, with base address referenced by 'array1D'
    array1D = new int [m1D];

    cout << array1D << endl << endl;

    for (int i = 0; i < m1D; i ++) {
        cout << array1D[i] << endl;
    }
    cout << "\n\n";
    Populate1DArray(array1D, m1D);

    for (int i = 0; i < m1D; i ++) {
        cout << &array1D[i] << '\t' << array1D[i] << endl;
    }

    system("pause");
    return 0;
}
