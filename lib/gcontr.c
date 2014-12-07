#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gcontr.h"
#include "u_graph.h"

int MAX_EDGES = 200;

//utility functions
void parr(long arr[], int size)
{
    for (long i = 0; i < size; i++) {
        printf("%lu ", arr[i]);
        printf("\n");
    }
}


int main(int argc, char* argv[]) 
{
    /*
    char line[MAX_EDGES * 2];
    int nodeCount = 0;

    while (fgets(line, MAX_EDGES * 2, stdin) != NULL) {
        int count = 0;
        char* tok;
        tok = strtok(line, " \n");
        while (tok != NULL) {
            if (count == 1) {
                ug_Node *newNode = createNode(nodeCount);
            }


            count++;
            tok = strtok(NULL, " \n");
        }


    }
    */
    return 0;
}
