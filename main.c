/* CS2211a 2021 */
/* Assignment 04 */
/* Jai Sharma */
/* 251172876 */
/* jsharm45 */
/* 2021 11 10 */ 

// needed header file to ensure the entire program will compile properly.
#include "headers.h"

int main()
{
    // Declaring necessary variables and the triple pointer going to be used.
    int nArrs, row, column;
    int ***nTables;
    
    // Prompting the user for the number of arrays they would like and storing the value in nArrs.
    printf("\nEnter the number of arrays (0 to quit): ");
    scanf("%d", &nArrs);
  
    
    
    while (nArrs != 0) {
        // Prompting the user for the number of rows and coloumns they would like each array to have and storing those values in row and column.
        printf("\nEnter the values for Rows, Columns, (e.g. 2 3): ");
        scanf("%d %d", &row, &column);
        printf("\n");
      
      
        // Creating the entire table which stores all the same sized arrays with different values and the combined array.
        nTables = (int ***) calloc (nArrs + 1, sizeof(int **));
        
        
        // Calling all the methods created to ensure correct program execution
        initArrays(nTables, nArrs, row, column);
        
        printArrays(nTables, nArrs, row, column, PRINTWITHOUTTOTAL);
        
        combineArrays(nTables, nArrs, row, column);
        
        printArrays(nTables, nArrs, row, column, PRINTTOTALNOTSORTED);
        
        arraySort(nTables, nArrs, row, column);
        
        printArrays(nTables,nArrs, row, column, PRINTTOTALSORTED);
    
        // Deallocating pointer memory
        free(nTables[0][0]);
	for (int i = 0; i < nArrs; i++)
	{
        	free(nTables[i]);
	}
       	free(nTables);
       
        // Formatting and indicating the end of a session.
        printf("\nXXXXXX END OF SESSION XXXXXX");
        printf("\n");
        printf("\n");
        printf("\nEnter the number of arrays (0 to quit): ");
        scanf("%d", &nArrs);
        
    }
    return 0;
}
