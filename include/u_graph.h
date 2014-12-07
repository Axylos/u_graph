#include "ug_node.h"
#include "ug_edge.h"

typedef struct {
    unsigned long MAX_VERTICES;
    unsigned long total_vertices;
    UG_Node **nodes;
    UG_Edge **edges;
} U_Graph;

void ug_add_node(U_Graph *graph, UG_Node *node);

void ug_join_nodes(U_Graph *graph, UG_Node *fromNode, UG_Node *toNode);
