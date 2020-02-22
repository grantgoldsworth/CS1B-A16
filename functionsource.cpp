/*******************************************
 * AUTHOR   : GRANT GOLDSWORTH
 * ID	    : 1164709
 * PROJECT  : A5
 * DUE DATE : 2/10/2020
*******************************************/

#include "functions.h"

/******************************************************************************
 * FUNCTION - CreateInt
 * ____________________________________________________________________________
 * This function will allow the user to enter an integer value, and
 * then it will dynamically declare memory for it.
 * CreateInt will return a pointer to this dynamic memory to the calling function.
 * ===> returns an int pointer of the new int
 *
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 *      Dynamic memory is not deleted once function terminates.
 ******************************************************************************/

int * CreateInt() {

    // declare a new int pointer and get information from user.
    // There is no prompt.
    int * address = nullptr;
    address = new int;
    cin >> *address;

    return address;

}



/******************************************************************************
 * FUNCTION - Populate1D
 * ____________________________________________________________________________
 * This function will accept a 1 dimensional array of int pointers, and will
 * allow the user to enter values for each element.
 * ===> returns nothing. Changes made to the array argument are saved on the actual
 *      parameter.
 *
 * PRE-CONDITIONS
 * 		array[]     : must be an array of int pointers
 * 		numElements : the size of the 1D array of pointers
 * POST-CONDITIONS
 *      Changes made to the array argument are saved on the actual parameter
 ******************************************************************************/

void Populate1D(int * array[],          // REF - the array of int pointers
                const int numElements) {// VAL - The number of elements in the array

    for (int i = 0; i < numElements; i ++ ) {
        cout << "[" << i << "] Enter an integer: ";
        array[i] = CreateInt();
    }

}



/******************************************************************************
 * FUNCTION - Populate2D
 * ____________________________________________________________________________
 * This function will accept a pointer to a 1D array of pointers to 1D arrays of int
 * pointers, the number of pointers to arrays, and the number of int pointers within
 * the sub arrays. It will allow the user to fill the arrays with integer values.
 * ===> returns nothing. Changes made to array argument are saved on actual parameter
 *
 * PRE-CONDITIONS
 * 		array   : a pointer to an array of pointers to arrays of int pointers
 * 		rows    : the number of sub-arrays; i.e. the number of pointers to arrays of int pointers
 * 		cols    : the number of elements within the sub-arrays; i.e. the number of int pointers at
 * 		          the bottom level
 * POST-CONDITIONS
 *      Changes made to the array argument are saved on the actual parameter
 ******************************************************************************/

void Populate2D(int *** array2D, // VAL - the pointer to the array of pointers to arrays of int pointers
                int rows,        // VAL - the number of sub arrays
                int cols) {      // VAL - the number of elements in the sub arrays

    for (int i = 0; i < rows; i ++) {
        for (int j = 0; j < cols; j ++) {
            cout << "[" << i << " " << j << "]: ";
            array2D[i][j] = CreateInt();
        }
    }

}



/******************************************************************************
 * FUNCTION - Print1D
 * ____________________________________________________________________________
 * This function will accept an array of int pointers and the number of elements
 * in that array
 * It will output the contents of the array.
 * ===> returns nothing.
 *
 * PRE-CONDITIONS
 * 		array[]     : must be an array of int pointers
 * 		numElements : the size of the 1D array of pointers
 * POST-CONDITIONS
 *      This function outputs stuff to the stream.
 *      This function will not modify the actual parameters
 ******************************************************************************/

void Print1D(int * array[],          // REF - the array of int pointers
            const int elementCount) {// VAL - the number of elements in the array of pointers

    cout << "[ ";
    for (int i = 0; i < elementCount; i ++) {
        cout << *array[i] << " ";
    }
    cout << "]\n";
}



/******************************************************************************
 * FUNCTION - Print2D
 * ____________________________________________________________________________
 * This function will accept a pointer to a 1D array of pointers to 1D arrays of int
 * pointers, the number of pointers to arrays, and the number of int pointers within
 * the sub arrays
 * It will output the contents of the array.
 * ===> returns nothing.
 *
 * PRE-CONDITIONS
 * 		array[]     : must be an array of int pointers
 * 		numElements : the size of the 1D array of pointers
 * POST-CONDITIONS
 *      This function outputs stuff to the stream.
 *      This function will not modify the actual parameters
 ******************************************************************************/

void Print2D(int *** array,     // VAL - pointer to array of pointers to arrays of int pointers
             const int rows,    // VAL - the number of sub arrays; number of pointers in top level array
             const int cols) {  // VAL - the number of elements in the sub arrays

    for (int i = 0; i < rows; i ++) {
        cout << "[ ";
        for (int j = 0; j < cols; j ++) {
            cout << *array[i][j] << " ";
        }
        cout << "]\n";
    }
}