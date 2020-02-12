/* 1D array and 2D array of int pointers
 * int * createInt() --> dynamicall creates an int
 *						 prompts user for value of the int
 *						 returns the pointer to the dynamic int variable
 *
 * void populate1Darray( 1D array, amount of elements entered) --> for loop, createInt
 *
 * void populate2Darray( 2D array, amount of elements) -->  (range based) nested loops, createInt  
 * 
 * call createInt to fill both arrays
 *
 * main - ask user how many elements for the 1D array
 *		  ask user how many elements (treat as m x n matrix)
 *		  populate arrays
 *	      print arrays
 *		  delete dynamic memory
 *
 * dynamically allocate space for the arrays
 * 
 *
 * int *array1D = nullPtr;
 * int numElements = 0;
 * cin >> numElements;
 *
 * arrayID = new *int[numElements];
*/