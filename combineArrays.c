/* CS2211a 2021 */
/* Assignment 04 */
/* Jai Sharma */
/* 251172876 */
/* jsharm45 */
/* 2021 11 10 */ 

// needed header file to ensure the entire program will compile properly.
#include "headers.h"

// Method signaure with the needed paramters inlcuding the entire table, the arrays, and the array dimensions.
int combineArrays(int *** nTables, int nArrs, int row, int column) {
    
    int t;
    int counter = 0;
    int sum = 0;
    
// Looping through the entire 3d array within the table and having each element of the summed table be a sum of the elements in the same position of the other arrays.
    for (int i = 0; i < nArrs; i++) {
        
         for (int x = 0; x < row; x++){
             
             for (int y = 0; y < column; y++){
                 // Asum[0][0][0] = A1[0][0][0] + A2[1][0][0] + A3[2][0][0] + ... + An[n -1][0][0]
                 nTables[nArrs][x][y] += nTables[i][x][y];
             }
         }
         
    }
}
