/* lab24-1.c
 * =============================================================
 *    Name:
 * Section:
 * Purpose: Practice using malloc / free
 * =============================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int numScores = 0;
    // Step 1:  Ask the user how many PFT scores to process
    printf("How many PFT scores: ");
    scanf("%d", &numScores);

    // Step 2:  Create an array with the exact size needed to store the PFT scores
    //          Hint:  Use malloc()
    int* entries = (int*) malloc(numScores*sizeof(int));

    // Step 3:  Get all the PFT Scores from the User
    //          (Store them in your array)
    double average = 0.0;
    for(int i = 0; i < numScores; i++){
        printf("Enter a PFT Score: ");
        scanf("%d", &entries[i]);
        average = average + entries[i];
    }

    // Step 4:  Calculate the Average of the PFT Scores
    //          Hint:  Don't forget that the average can be a double!
    average = average/numScores;

    // Step 5:  Print the Average
    printf("The average PFT Score is %.1lf", average);

    // Step 6:  Reexamine All PFT Scores, and Count How Many are Lower than the Average
    int numBelow = 0;
    for(int i = 0; i < numScores; i++){
        if(entries[i] < average){
            numBelow++;
        }
    }

    // Step 7:  Print the # of Cadets Lower than the Average
    printf("%d cadets are below the average", numBelow);

    // Step 8:  Free the Memory you malloc'ed in Step 2
    //          Hint:  Use free()  
    free(entries);
    return 0;

}