/* CS2211a 2021 */
/* Assignment 04 */
/* Jai Sharma */
/* 251172876 */
/* jsharm45 */
/* 2021 11 10 */ 

#ifndef FUNCTION_PROTOTYPES_HEADERS_H
#define FUNCTION_PROTOTYPES_HEADERS_H

// Preprocessor defintions used to help in the printing of the different arrays.
    #define PRINTWITHOUTTOTAL 0
    #define PRINTTOTALNOTSORTED 1
    #define PRINTTOTALSORTED 2
 
 // Function prototypes.   
    void initArrays(int *** nTables, int nArrs, int row, int column);
    
    int combineArrays(int *** nTables, int nArrs, int row, int column);
    
    void arraySort(int *** nTables, int nArrs, int row, int column);
    
    void printArrays(int *** nTables, int nArrs, int row, int column, int command);


#endif // FUNCTION_PROTOTYPES_HEADERS_H
