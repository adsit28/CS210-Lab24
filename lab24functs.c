/* lab24functs.c
 * =============================================================
 *    Name:
 * Section:
 * Purpose: Practice using malloc / free
 * =============================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab24functs.h"

int getNumRecs(char* dataFile){
    FILE* file = NULL;
    file =fopen(dataFile, "r");
    if (file == NULL){
        printf("file did not read in, return(1)");
        return(-1);
    }
    int numRecords = 0;
    fscanf(file, "%d", &numRecords);
    fclose(file);
    return numRecords;
}

void getDataText(CadetInfoStructType* cadetRecords, int numRecs, char* dataFile){
    FILE* file = NULL;
    file =fopen(dataFile, "r");
    if (file == NULL){
        printf("file did not read in, return(1)");
        exit(1);
    }
    char last[40];
    char first[40];
    char whole[100];
    int age = 0;
    int squad = 0;
    int year = 0;
    int row = 0;
    char discard[100];

    fgets(discard, 100, file);

    while(fscanf(file, "%s %s %d %d %d", last, first, &age, &squad, &year) == 5 && row < numRecs){
        strcpy(whole, first);
        strcat(whole, " ");
        strcat(whole, last);
        strcpy(cadetRecords[row].name, whole);
        cadetRecords[row].age = age;
        cadetRecords[row].squad = squad;
        cadetRecords[row].year = year;
        row++;
    }

    int numRecords = 0;
    fscanf(file, "%d", &numRecords);
    fclose(file);
}

