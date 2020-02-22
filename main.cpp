/*******************************************
 * AUTHOR   : GRANT GOLDSWORTH
 * ID	    : 1164709
 * PROJECT  : A16
 * DUE DATE : 2/24/2020
*******************************************/

#include "functions.h"

/*******************************************************************************
 * A16 - DYNAMIC ARRAYS II
 * -----------------------------------------------------------------------------
 * This program is designed to help me learn about dynamic declaration of variables,
 * notably arrays. And pointers to arrays. And pointers to pointers to pointers to pointers to
 *
 * Prompt user for number of elements for a 1 dimensional array, and allow them to enter int
 * elements. Ask user for dimensions of an mxn matrix and allow them to enter integer elements. Output
 * the 1D array as a row vector and the 2D array as a matrix
 *
 * INPUT
 *      - Number of elements
 *      - Elements (integers)
 *
 * OUTPUT
 *      - The final arrays.
 *      - Example:
 *          1D array:
 *          [1 2 3 4 5]
 *
 *          2D array:
 *          [1 2]
 *          [3 4]
 *          [6 0]
 *
 *******************************************************************************/

int main() {

    int ** array1D = nullptr;           // IN CALC OUT - points to an array of integer pointers
    int *** specialArray2D = nullptr;   // IN CALC OUT - points to an array of pointers, each pointing to an
                                        //               an array of int pointers

    int rows1D;     // IN CALC OUT - number of rows (or columns, computer doesnt care) in the 1D array
    int m2D;        // IN CALC OUT - number of row vectors in matrix
    int n2D;        // IN CALC OUT - number of elements in row vectors in matrix


    // INPUT - Obtain number of elements for the 1D array from the user
    cout << "Enter values for 1D array\n";
    cout << "Enter number of elements for 1D array: ";
    cin >> rows1D;

    // dynamically declare the 1D array of integer pointers, and pass the address to the pointer pointer
    array1D = new int * [rows1D];

    // allow user to fill 1D array with integers
    Populate1D(array1D, rows1D);


    // INPUT - Obtain dimensions of the matrix from the user.
    cout << "\nEnter values for 2D array\n";
    cout << "Enter number of rows for mxn array: ";
    cin  >> m2D;
    cout << "Enter number of columns for mxn array: ";
    cin >> n2D;
    cout << "Array of " << m2D * n2D << " elements created. Enter values for row vectors:\n";

    // dynamically declare the array of pointers to int pointer arrays
    specialArray2D = new int ** [m2D];
    // for each element in specialArray2D (top level), declare it as a pointer to an array of int pointers
    for (int j = 0; j < m2D; j ++) {
        specialArray2D[j] = new int * [n2D];
    }

    // allow user to fill matrix with integers
    Populate2D(specialArray2D, m2D, n2D);


    // OUTPUT - Output the results, as a row vector and an mxn matrix
    cout << "\n1D Array:\n";
    Print1D(array1D, rows1D);

    cout << "\n\n2D Array:\n";
    Print2D(specialArray2D, m2D, n2D);
    

    // return memory to OS and deactivate pointers
    for (int i = 0; i < rows1D; i ++) {
        delete array1D[i];
        array1D[i] = nullptr;
    }

    delete array1D;
    array1D = nullptr;


    for (int i = 0; i < m2D; i ++) {
        for (int j = 0; j < n2D; j ++) {
            // delete data stored in dynamic memory
            delete specialArray2D[i][j];
            // set int pointer to null
            specialArray2D[i][j] = nullptr;
        }
        delete specialArray2D[i];
        specialArray2D[i] = nullptr;
    }

    delete specialArray2D;
    specialArray2D = nullptr;


    cout << endl << endl;
    system("pause");
    return 0;
}
