#include<string.h>

typedef struct _BNode{
  char name[500];
  struct _BNode *right, *left;
} BNode;


  void insert(BNode** Btree, char empName[]){
    node *temp = NULL;

    if(!(*Btree)){   //if empty create a the root
      temp = (BNode *)malloc(sizeof(Bnode));
      temp -> left = temp -> right =NULL; //since root is set is childs become null
      temp -> name = empName; //put the name of employee on the node
      *Btree = temp; //point to the newly created root
      return;
    }

    if(nameValue(empName) < (*Btree) -> nameValue(name))
      insert(&(*Btree) -> left, empName);

    if(nameValue(empName) > (*Btree) -> nameValue(name))
      insert(&(*Btree) -> right, empName);

  }

void printEmployeeList(BNode *Btree){
  if(Btree){
    printEmployeeList(Btree -> right);//print inOrder since we wnat the list on alpahabetical order
    printf("%s\n",Btree -> name);
    printEmployeeList(Btree -> left);
  }
  else{
    printf("No employees found on the database.");
  }
}

int nameValue(char name []){
    int val = 0, i,length;
    length = strlen(name); //get length of the char array(string)
    for(i=0; i<length; i++){ //go through the array
      val = val+(name[i]-'0'); /* we would add the value of each letter to see the total weight of                                the name, when deciding to either insert right or left */ 
    }
    return val;
  }
