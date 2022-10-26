#ifndef LLP1_DATA_STRUCT_H
#define LLP1_DATA_STRUCT_H

typedef struct attribute{
    union {
        char * sfield;
        int ifield;
        float ffield;
        _Bool bfield;
    };
    struct attribute *next;
} attribute;

typedef struct node{
    char * name;
    attribute * att;
    int n;
    struct node ** neigbors;
} node;

typedef struct graph{
    int n;
    node * nodes;
} graph;

#endif //LLP1_DATA_STRUCT_H
