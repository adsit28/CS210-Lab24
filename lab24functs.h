/* lab24functs.h
 * =============================================================
 *    Name:
 * Section:
 * Purpose: Practice using malloc / free
 * =============================================================
 */

#ifndef LAB24FUNCTS_H
#define LAB24FUNCTS_H

typedef struct CadetInfoStruct {
    char name[50];
    int age;
    int squad;
    int year;
} CadetInfoStructType;

int getNumRecs(char* dataFile);

void getDataText(CadetInfoStructType* cadetRecords, int numRecs, char* dataFile);



#endif
