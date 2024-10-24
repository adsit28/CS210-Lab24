/* lab24-2.c
 * =============================================================
 *    Name:
 * Section:
 * Purpose: Practice using malloc / free
 * =============================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "lab24functs.h"

int main() {

    // FOLLOW THE LAB INSTRUCTIONS BEFORE WRITING CODE!
    // Call getNumRecs() with the appropriate parameters
    // Store the result in a variable
    int numRecs = 0;
    numRecs = getNumRecs("lab24data.txt");
    printf("%d records in the data file.\n", numRecs);

    // Print the Number of Records in the File (according to getNumRecs)


    // Using the value obtained above, dynamically allocate an array of CadetInfoStructType that is exactly the right size
    // to hold the number of records in the data file
    CadetInfoStructType* dataArray = (CadetInfoStructType*)malloc((numRecs * sizeof(CadetInfoStructType)));

    // Call getDataText() to read the file data into the dynamically allocated array
    getDataText(dataArray, numRecs, "lab24data.txt");

    // Print the First Cadet
    printf("The first cadet is:\nCadet name = %s\nCadet age = %d\nCadet squad = %d\nCadet year = %d\n", dataArray[0].name, dataArray[0].age, dataArray[0].squad, dataArray[0].year);

    // Print the Last Cadet
    printf("The last cadet is:\nCadet name = %s\nCadet age = %d\nCadet squad = %d\nCadet year = %d\n", dataArray[numRecs - 1].name, dataArray[numRecs - 1].age, dataArray[numRecs - 1].squad, dataArray[numRecs - 1].year);

    // Free the array
    free(dataArray);

    return 0;

}