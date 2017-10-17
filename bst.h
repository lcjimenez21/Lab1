#ifndef BNode_included
#define BNode_included

typedef struct _BNode{
  char name[500];
  struct _BNode *right, *left;
} BNode;

void insert(BNode **Btree, char empName[]);
   

void printEmployeeList(BNode *Btree);

void remove(BNode **Btree, char empName[]);

int nameValue(char name []);


#endif
