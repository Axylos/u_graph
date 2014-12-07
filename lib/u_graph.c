#include "u_graph.h"

void ug_add_node(U_Graph *graph, UG_Node *node) {
    graph->nodes[graph->total_vertices++] = node;
}
