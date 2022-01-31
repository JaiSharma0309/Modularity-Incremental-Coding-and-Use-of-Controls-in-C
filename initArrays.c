/* CS2211a 2021 */
/* Assignment 04 */
/* Jai Sharma */
/* 251172876 */
/* jsharm45 */
/* 2021 11 10 */ 

// needed header file to ensure the entire program will compile properly.
#include "headers.h"

// Method signaure with the needed paramters inlcuding the entire table, the arrays, and the array dimensions. 
void initArrays(int *** nTables, int nArrs, int row, int column) {
    
    // Will help in returning random numbers to be used in the arrays.
    srand(time(NULL)); 


// Filling each 2d array with a random integer that follows the guidelines.
    for (int i = 0; i < nArrs; i++) 
    {
        nTables[i] = (int**) calloc ( row, sizeof (int*));
        for (int j = 0; j < row; ++j)
        {
            nTables[i][j] = (int*) calloc ( column, sizeof(int));
            for (int k = 0; k < column; k++)
              {
                // Will return a random number between 1 and ten times the total number of elemetns in the collection.
                int r = rand() % (10 * nArrs * row * column) + 1; 
                nTables[i][j][k] = r;
              }
        }
    }
    
    // Doing the same thing but this time for the combined array and setting the array elements to 0.
    nTables[nArrs] = (int**) calloc ( row, sizeof (int*));
    for ( int i = 0; i < row; i++){
        nTables[nArrs][i] = (int*) calloc ( column, sizeof(int));
        for ( int j = 0; j < column; j++){
            nTables[nArrs][i][j] = 0;
        }
    }
    
}      

