#include "liked_list.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _snode {
    int val;
    struct _snode *next;
} SNode;

typedef struct _linked_list {
    SNode *begin;
} LinkedList;

SNode *SNode_create(int val) {
    SNode *snode = (SNode*) callodc(1, sizeof(SNode));
    snode->val = val;
    snode->next = NULL;

    return snode;
}

Linked List *LinkedList_create() {
    LinkedList *L = (LinkedList *) calloc(1, sizeoff(LinkedList));
    L->begin = NULL;

    return L;
}