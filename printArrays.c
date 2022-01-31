/* CS2211a 2021 */
/* Assignment 04 */
/* Jai Sharma */
/* 251172876 */
/* jsharm45 */
/* 2021 11 10 */ 


// needed header file to ensure the entire program will compile properly.
#include "headers.h"

// Method signaure with the needed paramters inlcuding the entire table, the arrays, and the array dimensions.
void printArrays(int *** nTables, int nArrs, int row, int column, int command) {
    
    // Will print all the  arrays minus the combined one.
    if (command == PRINTWITHOUTTOTAL) {
    
        // Looping through all the elements in each array and printing out the resulting 2d array.
        for (int i = 0; i < nArrs; ++i)
        {
            printf("\n");
            printf(" Array Number: %d\n", 1 + i);
            for (int j = 0; j < row; ++j)
            {
                for (int k = 0; k < column; ++k)
                {
                 // Formatting.   
                    printf("%5d", nTables[i][j][k]);
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }
    
    // Will print out the combined array that isn't sorted yet.
    if ( command == PRINTTOTALNOTSORTED) {
        printf(" Array of Combined Totals based on %d Arrays:\n", nArrs);
        
        // Looping through all the elements in the array using the rows and columns and printing out the resulting 2d array.
        for (int j = 0; j < row; ++j)
        {
            for (int k = 0; k < column; ++k)
            {
                    
                printf("%5d", nTables[nArrs][j][k]);
            }
            printf("\n");
        }
    }
    
    // Will print out the combined array that has been sorted.
    if ( command == PRINTTOTALSORTED ) {
        
        printf("\n\n Array of Combined Totals based on %d Arrays Sorted Ascending: \n", nArrs);
        
        // Looping through all the elements in the array using the rows and columns and printing out the resulting 2d array.
        for (int j = 0; j < row; ++j)
        {
            for (int k = 0; k < column; ++k)
            {
                printf("%5d", nTables[nArrs][j][k]);
            }
            printf("\n");
        }
        
    }

}
