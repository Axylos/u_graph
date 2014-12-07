#include <stdlib.h>
#include "ug_node.h"
#include <assert.h>

UG_Node *createNode(int id) {
    UG_Node *newNode = malloc(sizeof(UG_Node));
    assert(newNode != NULL);

    newNode->id = id;
    return newNode;
}
