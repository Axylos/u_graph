typedef struct UG_Edge_ UG_Edge;

typedef struct UG_Node_ {
    int id;
    UG_Edge **edges; 
} UG_Node;

UG_Node *createNode(int id);
