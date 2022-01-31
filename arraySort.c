/* CS2211a 2021 */
/* Assignment 04 */
/* Jai Sharma */
/* 251172876 */
/* jsharm45 */
/* 2021 11 10 */ 

// needed header file to ensure the entire program will compile properly.
#include "headers.h"

// Method signaure with the needed paramters inlcuding the entire table, the arrays, and the array dimensions.
void arraySort (int *** nTables, int nArrs, int row, int column) {
    
    // Going to create a new 1d array that holds all the elements of the 2d array that needs to be sorted.  Defining rc as the new arrays length.
    int rc = row * column;
    
    // Creating the new 1d array and calling it sortingArray.
    int sortingArray [rc];
    
    // Looping through all the elements in the 2d array and putting it into the new 1d array we just created.
    int index = 0;
    for (int i = 0; i < row; i++) {
        
        for (int j = 0; j < column; j++) {
            sortingArray[index] = nTables[nArrs][i][j];
            index++;
        }
    }
    
   

    
    // Now we are going to sort the 1d array.
    for (int i = 0; i < rc; i++) {
        
            // Comparing each element with the one in question from the first loop to see which is bigger.
            for (int j = i + 1; j < rc; j++) {
            
                if ((sortingArray[i] != 0) && (sortingArray[j] != 0)) {
                
                    // If the element in question is bigger than one of the subsequent element's its being compared to, the elements will have to shift places in the array.
                    if (sortingArray[j] < sortingArray[i]) {
                    
                    // Creating a temp variable to store the value of the element in question, so we don't lose its value when conducting the switch.
                    int temp = sortingArray[i];
                    sortingArray[i] = sortingArray[j];
                    sortingArray[j] = temp;
            
                    } 
            
                }
            
            
            }
        }
    
    // Now putting the elements that was just sorted in the 1d array back into the 2d array, so it is now sorted.
    index = 0;
    for (int i = 0; i < row; i++) {
        
        for (int j = 0; j < column; j++) {
            nTables[nArrs][i][j] = sortingArray[index];
            index++;
        }
    }
}

